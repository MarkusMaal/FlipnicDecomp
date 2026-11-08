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

// Function: entry_00112fdc
// Address: 0x112fdc - 0x112ffc
void entry_00112fdc_0x112fdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112fdc_0x112fdc");
#endif

    ctx->pc = 0x112fdcu;

    // 0x112fdc: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x112fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x112fe0: 0x1464001a  bne         $v1, $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x112FE0u;
    {
        const bool branch_taken_0x112fe0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x112fe0) {
            ctx->pc = 0x11304Cu;
            return;
        }
    }
    ctx->pc = 0x112FE8u;
    // 0x112fe8: 0x8f8685f4  lw          $a2, -0x7A0C($gp)
    ctx->pc = 0x112fe8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x112fec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x112fecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112ff0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x112ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x112ff4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x112FF4u;
    {
        const bool branch_taken_0x112ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112FF4u;
        // 0x112ff8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112ff4) {
            ctx->pc = 0x113040u;
            return;
        }
    }
    ctx->pc = 0x112FFCu;
}
