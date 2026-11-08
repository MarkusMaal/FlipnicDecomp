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

// Function: entry_0013cab4
// Address: 0x13cab4 - 0x13cae8
void entry_0013cab4_0x13cab4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013cab4_0x13cab4");
#endif

    switch (ctx->pc) {
        case 0x13cadcu: goto label_13cadc;
        default: break;
    }

    ctx->pc = 0x13cab4u;

    // 0x13cab4: 0x0  nop
    ctx->pc = 0x13cab4u;
    // NOP
    // 0x13cab8: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x13cab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x13cabc: 0x8fa30084  lw          $v1, 0x84($sp)
    ctx->pc = 0x13cabcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x13cac0: 0x1483ffe7  bne         $a0, $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x13CAC0u;
    {
        const bool branch_taken_0x13cac0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x13cac0) {
            ctx->pc = 0x13CA60u;
            return;
        }
    }
    ctx->pc = 0x13CAC8u;
    // 0x13cac8: 0x8e230120  lw          $v1, 0x120($s1)
    ctx->pc = 0x13cac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x13cacc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x13CACCu;
    {
        const bool branch_taken_0x13cacc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13cacc) {
            ctx->pc = 0x13CAE8u;
            return;
        }
    }
    ctx->pc = 0x13CAD4u;
    // 0x13cad4: 0xc0512c8  jal         func_144B20
    ctx->pc = 0x13CAD4u;
    SET_GPR_U32(ctx, 31, 0x13CADCu);
    ctx->pc = 0x144B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144B20u, 0x13CAD4u, 0x13CADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CADCu;
label_13cadc:
    // 0x13cadc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13cadcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cae0: 0xc051334  jal         func_144CD0
    ctx->pc = 0x13CAE0u;
    SET_GPR_U32(ctx, 31, 0x13CAE8u);
    ctx->pc = 0x13CAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CAE0u;
    // 0x13cae4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144CD0u, 0x13CAE0u, 0x13CAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CAE8u;
}
