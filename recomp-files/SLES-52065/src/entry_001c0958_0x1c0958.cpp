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

// Function: entry_001c0958
// Address: 0x1c0958 - 0x1c097c
void entry_001c0958_0x1c0958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c0958_0x1c0958");
#endif

    ctx->pc = 0x1c0958u;

    // 0x1c0958: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c0958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c095c: 0x8023f578  lb          $v1, -0xA88($at)
    ctx->pc = 0x1c095cu;
    SET_GPR_S32(ctx, 3, (int8_t)FAST_READ8(0x36F578u));
    // 0x1c0960: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C0960u;
    {
        const bool branch_taken_0x1c0960 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0960u;
        // 0x1c0964: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0960) {
            ctx->pc = 0x1C097Cu;
            return;
        }
    }
    ctx->pc = 0x1C0968u;
    // 0x1c0968: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c0968u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c096c: 0xac24f570  sw          $a0, -0xA90($at)
    ctx->pc = 0x1c096cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x36F570u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F570u, _value); } while (0);
    // 0x1c0970: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c0970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0974: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c0974u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c0978: 0xa023f578  sb          $v1, -0xA88($at)
    ctx->pc = 0x1c0978u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36F578u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F578u, _value); } while (0);
    ctx->pc = 0x1c097cu;
}
