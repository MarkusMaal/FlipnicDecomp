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

// Function: entry_001cf230
// Address: 0x1cf230 - 0x1cf310
void entry_001cf230_0x1cf230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf230_0x1cf230");
#endif

    switch (ctx->pc) {
        case 0x1cf248u: goto label_1cf248;
        case 0x1cf268u: goto label_1cf268;
        case 0x1cf27cu: goto label_1cf27c;
        case 0x1cf294u: goto label_1cf294;
        case 0x1cf2a8u: goto label_1cf2a8;
        case 0x1cf2c0u: goto label_1cf2c0;
        case 0x1cf2d4u: goto label_1cf2d4;
        case 0x1cf2ecu: goto label_1cf2ec;
        case 0x1cf308u: goto label_1cf308;
        default: break;
    }

    ctx->pc = 0x1cf230u;

    // 0x1cf230: 0xc7ac00a0  lwc1        $f12, 0xA0($sp)
    ctx->pc = 0x1cf230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cf234: 0xc7ad00a4  lwc1        $f13, 0xA4($sp)
    ctx->pc = 0x1cf234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1cf238: 0xc7ae00a8  lwc1        $f14, 0xA8($sp)
    ctx->pc = 0x1cf238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1cf23c: 0xc7af00ac  lwc1        $f15, 0xAC($sp)
    ctx->pc = 0x1cf23cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1cf240: 0xc062860  jal         func_18A180
    ctx->pc = 0x1CF240u;
    SET_GPR_U32(ctx, 31, 0x1CF248u);
    ctx->pc = 0x1CF244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF240u;
    // 0x1cf244: 0x8ea40060  lw          $a0, 0x60($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A180u, 0x1CF240u, 0x1CF248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF248u;
label_1cf248:
    // 0x1cf248: 0x29d1021  addu        $v0, $s4, $sp
    ctx->pc = 0x1cf248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 29)));
    // 0x1cf24c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cf24cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cf250: 0xc4540080  lwc1        $f20, 0x80($v0)
    ctx->pc = 0x1cf250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1cf254: 0x8ea40060  lw          $a0, 0x60($s5)
    ctx->pc = 0x1cf254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x1cf258: 0xc42cfb78  lwc1        $f12, -0x488($at)
    ctx->pc = 0x1cf258u;
    { uint32_t bits = FAST_READ32(0x36FB78u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cf25c: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1cf25cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1cf260: 0xc06282c  jal         func_18A0B0
    ctx->pc = 0x1CF260u;
    SET_GPR_U32(ctx, 31, 0x1CF268u);
    ctx->pc = 0x1CF264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF260u;
    // 0x1cf264: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0B0u, 0x1CF260u, 0x1CF268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF268u;
label_1cf268:
    // 0x1cf268: 0x8ea40060  lw          $a0, 0x60($s5)
    ctx->pc = 0x1cf268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x1cf26c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1cf26cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1cf270: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1cf270u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf274: 0xc0627bc  jal         func_189EF0
    ctx->pc = 0x1CF274u;
    SET_GPR_U32(ctx, 31, 0x1CF27Cu);
    ctx->pc = 0x1CF278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF274u;
    // 0x1cf278: 0x24a53168  addiu       $a1, $a1, 0x3168 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189EF0u, 0x1CF274u, 0x1CF27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF27Cu;
label_1cf27c:
    // 0x1cf27c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cf27cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cf280: 0x8ea40060  lw          $a0, 0x60($s5)
    ctx->pc = 0x1cf280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x1cf284: 0xc42cfb88  lwc1        $f12, -0x478($at)
    ctx->pc = 0x1cf284u;
    { uint32_t bits = FAST_READ32(0x36FB88u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cf288: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1cf288u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1cf28c: 0xc06282c  jal         func_18A0B0
    ctx->pc = 0x1CF28Cu;
    SET_GPR_U32(ctx, 31, 0x1CF294u);
    ctx->pc = 0x1CF290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF28Cu;
    // 0x1cf290: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0B0u, 0x1CF28Cu, 0x1CF294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF294u;
label_1cf294:
    // 0x1cf294: 0x8ea40060  lw          $a0, 0x60($s5)
    ctx->pc = 0x1cf294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x1cf298: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1cf298u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1cf29c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1cf29cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf2a0: 0xc0627bc  jal         func_189EF0
    ctx->pc = 0x1CF2A0u;
    SET_GPR_U32(ctx, 31, 0x1CF2A8u);
    ctx->pc = 0x1CF2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF2A0u;
    // 0x1cf2a4: 0x24a53168  addiu       $a1, $a1, 0x3168 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189EF0u, 0x1CF2A0u, 0x1CF2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF2A8u;
label_1cf2a8:
    // 0x1cf2a8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cf2a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cf2ac: 0x8ea40060  lw          $a0, 0x60($s5)
    ctx->pc = 0x1cf2acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x1cf2b0: 0xc42cfb98  lwc1        $f12, -0x468($at)
    ctx->pc = 0x1cf2b0u;
    { uint32_t bits = FAST_READ32(0x36FB98u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cf2b4: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1cf2b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1cf2b8: 0xc06282c  jal         func_18A0B0
    ctx->pc = 0x1CF2B8u;
    SET_GPR_U32(ctx, 31, 0x1CF2C0u);
    ctx->pc = 0x1CF2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF2B8u;
    // 0x1cf2bc: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0B0u, 0x1CF2B8u, 0x1CF2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF2C0u;
label_1cf2c0:
    // 0x1cf2c0: 0x8ea40060  lw          $a0, 0x60($s5)
    ctx->pc = 0x1cf2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x1cf2c4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1cf2c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1cf2c8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1cf2c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf2cc: 0xc0627bc  jal         func_189EF0
    ctx->pc = 0x1CF2CCu;
    SET_GPR_U32(ctx, 31, 0x1CF2D4u);
    ctx->pc = 0x1CF2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF2CCu;
    // 0x1cf2d0: 0x24a53168  addiu       $a1, $a1, 0x3168 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189EF0u, 0x1CF2CCu, 0x1CF2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF2D4u;
label_1cf2d4:
    // 0x1cf2d4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1cf2d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1cf2d8: 0x2a020005  slti        $v0, $s0, 0x5
    ctx->pc = 0x1cf2d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1cf2dc: 0x1440ffb2  bnez        $v0, . + 4 + (-0x4E << 2)
    ctx->pc = 0x1CF2DCu;
    {
        const bool branch_taken_0x1cf2dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF2DCu;
        // 0x1cf2e0: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf2dc) {
            ctx->pc = 0x1CF1A8u;
            return;
        }
    }
    ctx->pc = 0x1CF2E4u;
    // 0x1cf2e4: 0xc06dc70  jal         func_1B71C0
    ctx->pc = 0x1CF2E4u;
    SET_GPR_U32(ctx, 31, 0x1CF2ECu);
    ctx->pc = 0x1CF2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF2E4u;
    // 0x1cf2e8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B71C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B71C0u, 0x1CF2E4u, 0x1CF2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF2ECu;
label_1cf2ec:
    // 0x1cf2ec: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cf2ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cf2f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cf2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf2f4: 0x9023fb48  lbu         $v1, -0x4B8($at)
    ctx->pc = 0x1cf2f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x36FB48u));
    // 0x1cf2f8: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CF2F8u;
    {
        const bool branch_taken_0x1cf2f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CF2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF2F8u;
        // 0x1cf2fc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf2f8) {
            ctx->pc = 0x1CF310u;
            return;
        }
    }
    ctx->pc = 0x1CF300u;
    // 0x1cf300: 0xc073cf8  jal         func_1CF3E0
    ctx->pc = 0x1CF300u;
    SET_GPR_U32(ctx, 31, 0x1CF308u);
    ctx->pc = 0x1CF304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF300u;
    // 0x1cf304: 0xa2a00040  sb          $zero, 0x40($s5) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 21), 64), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF3E0u, 0x1CF300u, 0x1CF308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF308u;
label_1cf308:
    // 0x1cf308: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1CF308u;
    {
        const bool branch_taken_0x1cf308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF308u;
        // 0x1cf30c: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf308) {
            ctx->pc = 0x1CF3B4u;
            return;
        }
    }
    ctx->pc = 0x1CF310u;
}
