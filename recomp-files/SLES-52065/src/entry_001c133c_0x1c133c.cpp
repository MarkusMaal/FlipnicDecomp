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

// Function: entry_001c133c
// Address: 0x1c133c - 0x1c138c
void entry_001c133c_0x1c133c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c133c_0x1c133c");
#endif

    switch (ctx->pc) {
        case 0x1c134cu: goto label_1c134c;
        case 0x1c1360u: goto label_1c1360;
        case 0x1c1374u: goto label_1c1374;
        default: break;
    }

    ctx->pc = 0x1c133cu;

    // 0x1c133c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1c133cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1340: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c1340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1344: 0xc06e028  jal         func_1B80A0
    ctx->pc = 0x1C1344u;
    SET_GPR_U32(ctx, 31, 0x1C134Cu);
    ctx->pc = 0x1C1348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1344u;
    // 0x1c1348: 0x24070014  addiu       $a3, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B80A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B80A0u, 0x1C1344u, 0x1C134Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C134Cu;
label_1c134c:
    // 0x1c134c: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c134cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c1350: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c1350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1354: 0x24a546d0  addiu       $a1, $a1, 0x46D0
    ctx->pc = 0x1c1354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18128));
    // 0x1c1358: 0xc06de84  jal         func_1B7A10
    ctx->pc = 0x1C1358u;
    SET_GPR_U32(ctx, 31, 0x1C1360u);
    ctx->pc = 0x1C135Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1358u;
    // 0x1c135c: 0x2406001a  addiu       $a2, $zero, 0x1A (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7A10u, 0x1C1358u, 0x1C1360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1360u;
label_1c1360:
    // 0x1c1360: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c1360u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c1364: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c1364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1368: 0x24a54940  addiu       $a1, $a1, 0x4940
    ctx->pc = 0x1c1368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18752));
    // 0x1c136c: 0xc06de24  jal         func_1B7890
    ctx->pc = 0x1C136Cu;
    SET_GPR_U32(ctx, 31, 0x1C1374u);
    ctx->pc = 0x1C1370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C136Cu;
    // 0x1c1370: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7890u, 0x1C136Cu, 0x1C1374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1374u;
label_1c1374:
    // 0x1c1374: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c1374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c1378: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c1378u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c137c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c137cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c1380: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c1380u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1384: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1384u;
        // 0x1c1388: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1384u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C138Cu;
}
