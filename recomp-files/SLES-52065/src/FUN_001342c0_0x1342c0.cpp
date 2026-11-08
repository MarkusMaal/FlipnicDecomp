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

// Function: FUN_001342c0
// Address: 0x1342c0 - 0x13435c
void FUN_001342c0_0x1342c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001342c0_0x1342c0");
#endif

    switch (ctx->pc) {
        case 0x1342e4u: goto label_1342e4;
        case 0x1342f4u: goto label_1342f4;
        case 0x134304u: goto label_134304;
        case 0x134310u: goto label_134310;
        case 0x13431cu: goto label_13431c;
        case 0x134328u: goto label_134328;
        case 0x134344u: goto label_134344;
        default: break;
    }

    ctx->pc = 0x1342c0u;

    // 0x1342c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1342c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1342c4: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x1342c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1342c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1342c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1342cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1342ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1342d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1342d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1342d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1342d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1342d8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1342d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1342dc: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x1342DCu;
    SET_GPR_U32(ctx, 31, 0x1342E4u);
    ctx->pc = 0x1342E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1342DCu;
    // 0x1342e0: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x1342DCu, 0x1342E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1342E4u;
label_1342e4:
    // 0x1342e4: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x1342e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1342e8: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x1342e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1342ec: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x1342ECu;
    SET_GPR_U32(ctx, 31, 0x1342F4u);
    ctx->pc = 0x1342F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1342ECu;
    // 0x1342f0: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x1342ECu, 0x1342F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1342F4u;
label_1342f4:
    // 0x1342f4: 0x26050060  addiu       $a1, $s0, 0x60
    ctx->pc = 0x1342f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x1342f8: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x1342f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x1342fc: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x1342FCu;
    SET_GPR_U32(ctx, 31, 0x134304u);
    ctx->pc = 0x134300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1342FCu;
    // 0x134300: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x1342FCu, 0x134304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134304u;
label_134304:
    // 0x134304: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x134304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x134308: 0xc07d312  jal         func_1F4C48
    ctx->pc = 0x134308u;
    SET_GPR_U32(ctx, 31, 0x134310u);
    ctx->pc = 0x13430Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134308u;
    // 0x13430c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C48u, 0x134308u, 0x134310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134310u;
label_134310:
    // 0x134310: 0x26240060  addiu       $a0, $s1, 0x60
    ctx->pc = 0x134310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x134314: 0xc07d312  jal         func_1F4C48
    ctx->pc = 0x134314u;
    SET_GPR_U32(ctx, 31, 0x13431Cu);
    ctx->pc = 0x134318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134314u;
    // 0x134318: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C48u, 0x134314u, 0x13431Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13431Cu;
label_13431c:
    // 0x13431c: 0x26240070  addiu       $a0, $s1, 0x70
    ctx->pc = 0x13431cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x134320: 0xc07d312  jal         func_1F4C48
    ctx->pc = 0x134320u;
    SET_GPR_U32(ctx, 31, 0x134328u);
    ctx->pc = 0x134324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134320u;
    // 0x134324: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C48u, 0x134320u, 0x134328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134328u;
label_134328:
    // 0x134328: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x134328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x13432c: 0x26240080  addiu       $a0, $s1, 0x80
    ctx->pc = 0x13432cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x134330: 0xae22004c  sw          $v0, 0x4C($s1)
    ctx->pc = 0x134330u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 2));
    // 0x134334: 0x26250050  addiu       $a1, $s1, 0x50
    ctx->pc = 0x134334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x134338: 0x26260060  addiu       $a2, $s1, 0x60
    ctx->pc = 0x134338u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x13433c: 0xc07d49c  jal         func_1F5270
    ctx->pc = 0x13433Cu;
    SET_GPR_U32(ctx, 31, 0x134344u);
    ctx->pc = 0x134340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13433Cu;
    // 0x134340: 0x26270070  addiu       $a3, $s1, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5270u, 0x13433Cu, 0x134344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134344u;
label_134344:
    // 0x134344: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x134344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x134348: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x134348u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13434c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13434cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x134350: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x134350u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x134354: 0x3e00008  jr          $ra
    ctx->pc = 0x134354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134354u;
        // 0x134358: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134354u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13435Cu;
}
