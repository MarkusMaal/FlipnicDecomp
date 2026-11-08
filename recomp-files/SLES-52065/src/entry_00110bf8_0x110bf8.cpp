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

// Function: entry_00110bf8
// Address: 0x110bf8 - 0x110c24
void entry_00110bf8_0x110bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110bf8_0x110bf8");
#endif

    switch (ctx->pc) {
        case 0x110c10u: goto label_110c10;
        default: break;
    }

    ctx->pc = 0x110bf8u;

    // 0x110bf8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x110bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x110bfc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x110bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110c00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x110c00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110c04: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x110c04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110c08: 0xc043ea4  jal         func_10FA90
    ctx->pc = 0x110C08u;
    SET_GPR_U32(ctx, 31, 0x110C10u);
    ctx->pc = 0x110C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110C08u;
    // 0x110c0c: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FA90u, 0x110C08u, 0x110C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110C10u;
label_110c10:
    // 0x110c10: 0x8f8585f4  lw          $a1, -0x7A0C($gp)
    ctx->pc = 0x110c10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x110c14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x110c14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110c18: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x110c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x110c1c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x110C1Cu;
    {
        const bool branch_taken_0x110c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110C1Cu;
        // 0x110c20: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110c1c) {
            ctx->pc = 0x110C64u;
            return;
        }
    }
    ctx->pc = 0x110C24u;
}
