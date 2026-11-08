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

// Function: FUN_001b8200
// Address: 0x1b8200 - 0x1b83a0
void FUN_001b8200_0x1b8200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b8200_0x1b8200");
#endif

    switch (ctx->pc) {
        case 0x1b8230u: goto label_1b8230;
        case 0x1b823cu: goto label_1b823c;
        case 0x1b8248u: goto label_1b8248;
        case 0x1b8264u: goto label_1b8264;
        case 0x1b8270u: goto label_1b8270;
        case 0x1b8284u: goto label_1b8284;
        case 0x1b8294u: goto label_1b8294;
        case 0x1b82a0u: goto label_1b82a0;
        case 0x1b82a8u: goto label_1b82a8;
        case 0x1b82b8u: goto label_1b82b8;
        case 0x1b82c4u: goto label_1b82c4;
        case 0x1b82f8u: goto label_1b82f8;
        case 0x1b8304u: goto label_1b8304;
        case 0x1b830cu: goto label_1b830c;
        case 0x1b8318u: goto label_1b8318;
        case 0x1b832cu: goto label_1b832c;
        case 0x1b8344u: goto label_1b8344;
        case 0x1b8358u: goto label_1b8358;
        case 0x1b8364u: goto label_1b8364;
        case 0x1b837cu: goto label_1b837c;
        default: break;
    }

    ctx->pc = 0x1b8200u;

    // 0x1b8200: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1b8200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1b8204: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1b8204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1b8208: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1b8208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1b820c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b820cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b8210: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b8210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b8214: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b8214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b8218: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b8218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b821c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b821cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8220: 0x12200056  beqz        $s1, . + 4 + (0x56 << 2)
    ctx->pc = 0x1B8220u;
    {
        const bool branch_taken_0x1b8220 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8220u;
        // 0x1b8224: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8220) {
            ctx->pc = 0x1B837Cu;
            goto label_1b837c;
        }
    }
    ctx->pc = 0x1B8228u;
    // 0x1b8228: 0xc06e0fc  jal         func_1B83F0
    ctx->pc = 0x1B8228u;
    SET_GPR_U32(ctx, 31, 0x1B8230u);
    ctx->pc = 0x1B83F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B83F0u, 0x1B8228u, 0x1B8230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8230u;
label_1b8230:
    // 0x1b8230: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b8230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b8234: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1B8234u;
    {
        const bool branch_taken_0x1b8234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8234u;
        // 0x1b8238: 0xafa20060  sw          $v0, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8234) {
            ctx->pc = 0x1B8264u;
            goto label_1b8264;
        }
    }
    ctx->pc = 0x1B823Cu;
label_1b823c:
    // 0x1b823c: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x1b823cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1b8240: 0xc06e20c  jal         func_1B8830
    ctx->pc = 0x1B8240u;
    SET_GPR_U32(ctx, 31, 0x1B8248u);
    ctx->pc = 0x1B8244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8240u;
    // 0x1b8244: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8830u, 0x1B8240u, 0x1B8248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8248u;
label_1b8248:
    // 0x1b8248: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b8248u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b824c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1b824cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1b8250: 0x8c22f290  lw          $v0, -0xD70($at)
    ctx->pc = 0x1b8250u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x36F290u));
    // 0x1b8254: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b8254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b8258: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b8258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b825c: 0xc048974  jal         func_1225D0
    ctx->pc = 0x1B825Cu;
    SET_GPR_U32(ctx, 31, 0x1B8264u);
    ctx->pc = 0x1B8260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B825Cu;
    // 0x1b8260: 0xac22f290  sw          $v0, -0xD70($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963856), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1225D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1225D0u, 0x1B825Cu, 0x1B8264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8264u;
label_1b8264:
    // 0x1b8264: 0x0  nop
    ctx->pc = 0x1b8264u;
    // NOP
    // 0x1b8268: 0xc06e0f8  jal         func_1B83E0
    ctx->pc = 0x1B8268u;
    SET_GPR_U32(ctx, 31, 0x1B8270u);
    ctx->pc = 0x1B826Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8268u;
    // 0x1b826c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B83E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B83E0u, 0x1B8268u, 0x1B8270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8270u;
label_1b8270:
    // 0x1b8270: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1b8270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b8274: 0x1462fff1  bne         $v1, $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1B8274u;
    {
        const bool branch_taken_0x1b8274 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b8274) {
            ctx->pc = 0x1B823Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b823c;
        }
    }
    ctx->pc = 0x1B827Cu;
    // 0x1b827c: 0xc0485a8  jal         func_1216A0
    ctx->pc = 0x1B827Cu;
    SET_GPR_U32(ctx, 31, 0x1B8284u);
    ctx->pc = 0x1216A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1216A0u, 0x1B827Cu, 0x1B8284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8284u;
label_1b8284:
    // 0x1b8284: 0x26340014  addiu       $s4, $s1, 0x14
    ctx->pc = 0x1b8284u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x1b8288: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1b8288u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b828c: 0xc06e07c  jal         func_1B81F0
    ctx->pc = 0x1B828Cu;
    SET_GPR_U32(ctx, 31, 0x1B8294u);
    ctx->pc = 0x1B8290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B828Cu;
    // 0x1b8290: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B81F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B81F0u, 0x1B828Cu, 0x1B8294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8294u;
label_1b8294:
    // 0x1b8294: 0x8c530004  lw          $s3, 0x4($v0)
    ctx->pc = 0x1b8294u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1b8298: 0xc06e07c  jal         func_1B81F0
    ctx->pc = 0x1B8298u;
    SET_GPR_U32(ctx, 31, 0x1B82A0u);
    ctx->pc = 0x1B829Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8298u;
    // 0x1b829c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B81F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B81F0u, 0x1B8298u, 0x1B82A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B82A0u;
label_1b82a0:
    // 0x1b82a0: 0x1262000a  beq         $s3, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B82A0u;
    {
        const bool branch_taken_0x1b82a0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b82a0) {
            ctx->pc = 0x1B82CCu;
            goto label_1b82cc;
        }
    }
    ctx->pc = 0x1B82A8u;
label_1b82a8:
    // 0x1b82a8: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x1b82a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1b82ac: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x1b82acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1b82b0: 0xc046c14  jal         func_11B050
    ctx->pc = 0x1B82B0u;
    SET_GPR_U32(ctx, 31, 0x1B82B8u);
    ctx->pc = 0x1B82B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B82B0u;
    // 0x1b82b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B050u, 0x1B82B0u, 0x1B82B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B82B8u;
label_1b82b8:
    // 0x1b82b8: 0x8e730004  lw          $s3, 0x4($s3)
    ctx->pc = 0x1b82b8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1b82bc: 0xc06e07c  jal         func_1B81F0
    ctx->pc = 0x1B82BCu;
    SET_GPR_U32(ctx, 31, 0x1B82C4u);
    ctx->pc = 0x1B82C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B82BCu;
    // 0x1b82c0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B81F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B81F0u, 0x1B82BCu, 0x1B82C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B82C4u;
label_1b82c4:
    // 0x1b82c4: 0x1662fff8  bne         $s3, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1B82C4u;
    {
        const bool branch_taken_0x1b82c4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b82c4) {
            ctx->pc = 0x1B82A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b82a8;
        }
    }
    ctx->pc = 0x1B82CCu;
label_1b82cc:
    // 0x1b82cc: 0x0  nop
    ctx->pc = 0x1b82ccu;
    // NOP
    // 0x1b82d0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b82d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b82d4: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x1b82d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1b82d8: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1B82D8u;
    {
        const bool branch_taken_0x1b82d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B82DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B82D8u;
        // 0x1b82dc: 0xac20f278  sw          $zero, -0xD88($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294963832), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b82d8) {
            ctx->pc = 0x1B832Cu;
            goto label_1b832c;
        }
    }
    ctx->pc = 0x1B82E0u;
    // 0x1b82e0: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1B82E0u;
    {
        const bool branch_taken_0x1b82e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b82e0) {
            ctx->pc = 0x1B832Cu;
            goto label_1b832c;
        }
    }
    ctx->pc = 0x1B82E8u;
    // 0x1b82e8: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1B82E8u;
    {
        const bool branch_taken_0x1b82e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b82e8) {
            ctx->pc = 0x1B832Cu;
            goto label_1b832c;
        }
    }
    ctx->pc = 0x1B82F0u;
    // 0x1b82f0: 0xc06e0f4  jal         func_1B83D0
    ctx->pc = 0x1B82F0u;
    SET_GPR_U32(ctx, 31, 0x1B82F8u);
    ctx->pc = 0x1B83D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B83D0u, 0x1B82F0u, 0x1B82F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B82F8u;
label_1b82f8:
    // 0x1b82f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b82f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b82fc: 0xc06e0ec  jal         func_1B83B0
    ctx->pc = 0x1B82FCu;
    SET_GPR_U32(ctx, 31, 0x1B8304u);
    ctx->pc = 0x1B8300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B82FCu;
    // 0x1b8300: 0x27a40064  addiu       $a0, $sp, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B83B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B83B0u, 0x1B82FCu, 0x1B8304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8304u;
label_1b8304:
    // 0x1b8304: 0xc06e0f4  jal         func_1B83D0
    ctx->pc = 0x1B8304u;
    SET_GPR_U32(ctx, 31, 0x1B830Cu);
    ctx->pc = 0x1B8308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8304u;
    // 0x1b8308: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B83D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B83D0u, 0x1B8304u, 0x1B830Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B830Cu;
label_1b830c:
    // 0x1b830c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1b830cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1b8310: 0xc06e0f0  jal         func_1B83C0
    ctx->pc = 0x1B8310u;
    SET_GPR_U32(ctx, 31, 0x1B8318u);
    ctx->pc = 0x1B8314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8310u;
    // 0x1b8314: 0x27a40068  addiu       $a0, $sp, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B83C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B83C0u, 0x1B8310u, 0x1B8318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8318u;
label_1b8318:
    // 0x1b8318: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x1b8318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x1b831c: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x1b831cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1b8320: 0x27a60068  addiu       $a2, $sp, 0x68
    ctx->pc = 0x1b8320u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x1b8324: 0xc06ee38  jal         func_1BB8E0
    ctx->pc = 0x1B8324u;
    SET_GPR_U32(ctx, 31, 0x1B832Cu);
    ctx->pc = 0x1B8328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8324u;
    // 0x1b8328: 0x27a70064  addiu       $a3, $sp, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB8E0u, 0x1B8324u, 0x1B832Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B832Cu;
label_1b832c:
    // 0x1b832c: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x1B832Cu;
    {
        const bool branch_taken_0x1b832c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B832Cu;
        // 0x1b8330: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b832c) {
            ctx->pc = 0x1B8368u;
            goto label_1b8368;
        }
    }
    ctx->pc = 0x1B8334u;
    // 0x1b8334: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x1B8334u;
    {
        const bool branch_taken_0x1b8334 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8334u;
        // 0x1b8338: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8334) {
            ctx->pc = 0x1B8364u;
            goto label_1b8364;
        }
    }
    ctx->pc = 0x1B833Cu;
    // 0x1b833c: 0xc06e0e8  jal         func_1B83A0
    ctx->pc = 0x1B833Cu;
    SET_GPR_U32(ctx, 31, 0x1B8344u);
    ctx->pc = 0x1B83A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B83A0u, 0x1B833Cu, 0x1B8344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8344u;
label_1b8344:
    // 0x1b8344: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b8344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b8348: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B8348u;
    {
        const bool branch_taken_0x1b8348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B834Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8348u;
        // 0x1b834c: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8348) {
            ctx->pc = 0x1B8364u;
            goto label_1b8364;
        }
    }
    ctx->pc = 0x1B8350u;
    // 0x1b8350: 0xc06e0e8  jal         func_1B83A0
    ctx->pc = 0x1B8350u;
    SET_GPR_U32(ctx, 31, 0x1B8358u);
    ctx->pc = 0x1B83A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B83A0u, 0x1B8350u, 0x1B8358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8358u;
label_1b8358:
    // 0x1b8358: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1b8358u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b835c: 0xc06ed40  jal         func_1BB500
    ctx->pc = 0x1B835Cu;
    SET_GPR_U32(ctx, 31, 0x1B8364u);
    ctx->pc = 0x1B8360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B835Cu;
    // 0x1b8360: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB500u, 0x1B835Cu, 0x1B8364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8364u;
label_1b8364:
    // 0x1b8364: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1b8364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_1b8368:
    // 0x1b8368: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1b8368u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1b836c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B836Cu;
    {
        const bool branch_taken_0x1b836c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1B8370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B836Cu;
        // 0x1b8370: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b836c) {
            ctx->pc = 0x1B8380u;
            goto label_1b8380;
        }
    }
    ctx->pc = 0x1B8374u;
    // 0x1b8374: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1B8374u;
    SET_GPR_U32(ctx, 31, 0x1B837Cu);
    ctx->pc = 0x1B8378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8374u;
    // 0x1b8378: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1B8374u, 0x1B837Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B837Cu;
label_1b837c:
    // 0x1b837c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1b837cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b8380:
    // 0x1b8380: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1b8380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b8384: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1b8384u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b8388: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b8388u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b838c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b838cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b8390: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b8390u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b8394: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b8394u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b8398: 0x3e00008  jr          $ra
    ctx->pc = 0x1B8398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B839Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8398u;
        // 0x1b839c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B83A0u;
}
