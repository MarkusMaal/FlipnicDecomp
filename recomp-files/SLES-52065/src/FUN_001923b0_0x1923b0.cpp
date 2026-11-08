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

// Function: FUN_001923b0
// Address: 0x1923b0 - 0x192458
void FUN_001923b0_0x1923b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001923b0_0x1923b0");
#endif

    switch (ctx->pc) {
        case 0x192424u: goto label_192424;
        case 0x192444u: goto label_192444;
        default: break;
    }

    ctx->pc = 0x1923b0u;

    // 0x1923b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1923b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1923b4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1923b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1923b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1923b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1923bc: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x1923bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1923c0: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x1923c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1923c4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1923c4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x1923c8: 0x7822d6e0  lq          $v0, -0x2920($at)
    ctx->pc = 0x1923c8u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x36D6E0u));
    // 0x1923cc: 0x7ba50010  lq          $a1, 0x10($sp)
    ctx->pc = 0x1923ccu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1923d0: 0x704510a8  pceqw       $v0, $v0, $a1
    ctx->pc = 0x1923d0u;
    SET_GPR_VEC(ctx, 2, PS2_PCEQW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x1923d4: 0x704215c8  ppach       $v0, $v0, $v0
    ctx->pc = 0x1923d4u;
    SET_GPR_VEC(ctx, 2, PS2_PPACH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x1923d8: 0x2c42ffff  sltiu       $v0, $v0, -0x1
    ctx->pc = 0x1923d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x1923dc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1923dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1923e0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1923E0u;
    {
        const bool branch_taken_0x1923e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1923E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1923E0u;
        // 0x1923e4: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1923e0) {
            ctx->pc = 0x1923F0u;
            goto label_1923f0;
        }
    }
    ctx->pc = 0x1923E8u;
    // 0x1923e8: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1923E8u;
    {
        const bool branch_taken_0x1923e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1923ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1923E8u;
        // 0x1923ec: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1923e8) {
            ctx->pc = 0x19244Cu;
            goto label_19244c;
        }
    }
    ctx->pc = 0x1923F0u;
label_1923f0:
    // 0x1923f0: 0x7822d6f0  lq          $v0, -0x2910($at)
    ctx->pc = 0x1923f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 1), 4294956784)));
    // 0x1923f4: 0x704510a8  pceqw       $v0, $v0, $a1
    ctx->pc = 0x1923f4u;
    SET_GPR_VEC(ctx, 2, PS2_PCEQW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x1923f8: 0x704215c8  ppach       $v0, $v0, $v0
    ctx->pc = 0x1923f8u;
    SET_GPR_VEC(ctx, 2, PS2_PPACH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x1923fc: 0x2c42ffff  sltiu       $v0, $v0, -0x1
    ctx->pc = 0x1923fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x192400: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x192400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x192404: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x192404u;
    {
        const bool branch_taken_0x192404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x192404) {
            ctx->pc = 0x19242Cu;
            goto label_19242c;
        }
    }
    ctx->pc = 0x19240Cu;
    // 0x19240c: 0x8f838704  lw          $v1, -0x78FC($gp)
    ctx->pc = 0x19240cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936324)));
    // 0x192410: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x192410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x192414: 0x78820550  lq          $v0, 0x550($a0)
    ctx->pc = 0x192414u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 1360)));
    // 0x192418: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x192418u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x19241c: 0xc063f40  jal         func_18FD00
    ctx->pc = 0x19241Cu;
    SET_GPR_U32(ctx, 31, 0x192424u);
    ctx->pc = 0x192420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19241Cu;
    // 0x192420: 0x24640210  addiu       $a0, $v1, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FD00u, 0x19241Cu, 0x192424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192424u;
label_192424:
    // 0x192424: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x192424u;
    {
        const bool branch_taken_0x192424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192424u;
        // 0x192428: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192424) {
            ctx->pc = 0x192448u;
            goto label_192448;
        }
    }
    ctx->pc = 0x19242Cu;
label_19242c:
    // 0x19242c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x19242cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x192430: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x192430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x192434: 0x8f838704  lw          $v1, -0x78FC($gp)
    ctx->pc = 0x192434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936324)));
    // 0x192438: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x192438u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x19243c: 0xc063f40  jal         func_18FD00
    ctx->pc = 0x19243Cu;
    SET_GPR_U32(ctx, 31, 0x192444u);
    ctx->pc = 0x192440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19243Cu;
    // 0x192440: 0x24640210  addiu       $a0, $v1, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FD00u, 0x19243Cu, 0x192444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192444u;
label_192444:
    // 0x192444: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x192444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_192448:
    // 0x192448: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x192448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19244c:
    // 0x19244c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x19244cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192450: 0x3e00008  jr          $ra
    ctx->pc = 0x192450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192450u;
        // 0x192454: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x192458u;
}
