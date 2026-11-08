#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_001b8b5c
// Address: 0x1b8b5c - 0x1b8b80
void entry_001b8b5c_0x1b8b5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b8b5c_0x1b8b5c");
#endif

    ctx->pc = 0x1b8b5cu;

    // 0x1b8b5c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b8b5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b8b60: 0x8023f420  lb          $v1, -0xBE0($at)
    ctx->pc = 0x1b8b60u;
    SET_GPR_S32(ctx, 3, (int8_t)FAST_READ8(0x36F420u));
    // 0x1b8b64: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B8B64u;
    {
        const bool branch_taken_0x1b8b64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B8B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8B64u;
        // 0x1b8b68: 0x24040042  addiu       $a0, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8b64) {
            ctx->pc = 0x1B8B80u;
            return;
        }
    }
    ctx->pc = 0x1B8B6Cu;
    // 0x1b8b6c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b8b6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b8b70: 0xfc24f438  sd          $a0, -0xBC8($at)
    ctx->pc = 0x1b8b70u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 4)); ps2TraceGuestWrite(rdram, 0x36F438u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x36F438u, _value); } while (0);
    // 0x1b8b74: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b8b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b8b78: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b8b78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b8b7c: 0xa023f420  sb          $v1, -0xBE0($at)
    ctx->pc = 0x1b8b7cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36F420u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F420u, _value); } while (0);
    ctx->pc = 0x1b8b80u;
}
