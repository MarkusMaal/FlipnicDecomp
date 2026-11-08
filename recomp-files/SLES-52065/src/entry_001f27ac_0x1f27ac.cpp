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

// Function: entry_001f27ac
// Address: 0x1f27ac - 0x1f27d8
void entry_001f27ac_0x1f27ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f27ac_0x1f27ac");
#endif

    ctx->pc = 0x1f27acu;

    // 0x1f27ac: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x1f27acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1f27b0: 0x3c070039  lui         $a3, 0x39
    ctx->pc = 0x1f27b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)57 << 16));
    // 0x1f27b4: 0x24e3fa80  addiu       $v1, $a3, -0x580
    ctx->pc = 0x1f27b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294965888));
    // 0x1f27b8: 0xa0620004  sb          $v0, 0x4($v1)
    ctx->pc = 0x1f27b8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x38FA84u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x38FA84u, _value); } while (0);
    // 0x1f27bc: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x1f27bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1f27c0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1F27C0u;
    {
        const bool branch_taken_0x1f27c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F27C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F27C0u;
        // 0x1f27c4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f27c0) {
            ctx->pc = 0x1F2808u;
            return;
        }
    }
    ctx->pc = 0x1F27C8u;
    // 0x1f27c8: 0x3c090039  lui         $t1, 0x39
    ctx->pc = 0x1f27c8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)57 << 16));
    // 0x1f27cc: 0x3c100039  lui         $s0, 0x39
    ctx->pc = 0x1f27ccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)57 << 16));
    // 0x1f27d0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1f27d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1f27d4: 0x0  nop
    ctx->pc = 0x1f27d4u;
    // NOP
    ctx->pc = 0x1f27d8u;
}
