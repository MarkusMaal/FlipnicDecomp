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

// Function: FUN_00152850
// Address: 0x152850 - 0x15290c
void FUN_00152850_0x152850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00152850_0x152850");
#endif

    switch (ctx->pc) {
        case 0x15289cu: goto label_15289c;
        case 0x1528bcu: goto label_1528bc;
        default: break;
    }

    ctx->pc = 0x152850u;

    // 0x152850: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x152850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x152854: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x152854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x152858: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x152858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x15285c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x15285cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x152860: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x152860u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152864: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x152864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x152868: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x152868u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15286c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15286cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x152870: 0x15082a  slt         $at, $zero, $s5
    ctx->pc = 0x152870u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x152874: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x152874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x152878: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x152878u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15287c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15287cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x152880: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x152880u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152884: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x152884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x152888: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x152888u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15288c: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x15288cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152890: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x152890u;
    {
        const bool branch_taken_0x152890 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x152894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152890u;
        // 0x152894: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152890) {
            ctx->pc = 0x1528DCu;
            goto label_1528dc;
        }
    }
    ctx->pc = 0x152898u;
    // 0x152898: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x152898u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_15289c:
    // 0x15289c: 0x26c80010  addiu       $t0, $s6, 0x10
    ctx->pc = 0x15289cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x1528a0: 0x26c70020  addiu       $a3, $s6, 0x20
    ctx->pc = 0x1528a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
    // 0x1528a4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1528a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1528a8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1528a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1528ac: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x1528acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1528b0: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x1528b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1528b4: 0xc0553bc  jal         func_154EF0
    ctx->pc = 0x1528B4u;
    SET_GPR_U32(ctx, 31, 0x1528BCu);
    ctx->pc = 0x1528B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1528B4u;
    // 0x1528b8: 0x26d60060  addiu       $s6, $s6, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154EF0u, 0x1528B4u, 0x1528BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1528BCu;
label_1528bc:
    // 0x1528bc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1528BCu;
    {
        const bool branch_taken_0x1528bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1528bc) {
            ctx->pc = 0x1528CCu;
            goto label_1528cc;
        }
    }
    ctx->pc = 0x1528C4u;
    // 0x1528c4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1528C4u;
    {
        const bool branch_taken_0x1528c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1528C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1528C4u;
        // 0x1528c8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1528c4) {
            ctx->pc = 0x1528E4u;
            goto label_1528e4;
        }
    }
    ctx->pc = 0x1528CCu;
label_1528cc:
    // 0x1528cc: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x1528ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x1528d0: 0x215102a  slt         $v0, $s0, $s5
    ctx->pc = 0x1528d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x1528d4: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1528D4u;
    {
        const bool branch_taken_0x1528d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1528D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1528D4u;
        // 0x1528d8: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1528d4) {
            ctx->pc = 0x15289Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15289c;
        }
    }
    ctx->pc = 0x1528DCu;
label_1528dc:
    // 0x1528dc: 0x0  nop
    ctx->pc = 0x1528dcu;
    // NOP
    // 0x1528e0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1528e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1528e4:
    // 0x1528e4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1528e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1528e8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1528e8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1528ec: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1528ecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1528f0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1528f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1528f4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1528f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1528f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1528f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1528fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1528fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x152900: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x152900u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x152904: 0x3e00008  jr          $ra
    ctx->pc = 0x152904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152904u;
        // 0x152908: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15290Cu;
}
