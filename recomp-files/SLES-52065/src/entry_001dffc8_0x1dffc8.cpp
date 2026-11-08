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

// Function: entry_001dffc8
// Address: 0x1dffc8 - 0x1e005c
void entry_001dffc8_0x1dffc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dffc8_0x1dffc8");
#endif

    switch (ctx->pc) {
        case 0x1dffecu: goto label_1dffec;
        case 0x1dfff8u: goto label_1dfff8;
        case 0x1e0010u: goto label_1e0010;
        case 0x1e0024u: goto label_1e0024;
        case 0x1e0040u: goto label_1e0040;
        case 0x1e0050u: goto label_1e0050;
        default: break;
    }

    ctx->pc = 0x1dffc8u;

    // 0x1dffc8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1dffc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1dffcc: 0x8e260020  lw          $a2, 0x20($s1)
    ctx->pc = 0x1dffccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1dffd0: 0x8e27001c  lw          $a3, 0x1C($s1)
    ctx->pc = 0x1dffd0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1dffd4: 0x24a53840  addiu       $a1, $a1, 0x3840
    ctx->pc = 0x1dffd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14400));
    // 0x1dffd8: 0x8e280028  lw          $t0, 0x28($s1)
    ctx->pc = 0x1dffd8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1dffdc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1dffdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dffe0: 0x8e290024  lw          $t1, 0x24($s1)
    ctx->pc = 0x1dffe0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1dffe4: 0xc0805c8  jal         func_201720
    ctx->pc = 0x1DFFE4u;
    SET_GPR_U32(ctx, 31, 0x1DFFECu);
    ctx->pc = 0x1DFFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFFE4u;
    // 0x1dffe8: 0x240502d  daddu       $t2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x1DFFE4u, 0x1DFFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFFECu;
label_1dffec:
    // 0x1dffec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1dffecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfff0: 0xc080664  jal         func_201990
    ctx->pc = 0x1DFFF0u;
    SET_GPR_U32(ctx, 31, 0x1DFFF8u);
    ctx->pc = 0x1DFFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFFF0u;
    // 0x1dfff4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x1DFFF0u, 0x1DFFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFFF8u;
label_1dfff8:
    // 0x1dfff8: 0x6a00043  bltz        $s5, . + 4 + (0x43 << 2)
    ctx->pc = 0x1DFFF8u;
    {
        const bool branch_taken_0x1dfff8 = (GPR_S32(ctx, 21) < 0);
        ctx->pc = 0x1DFFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFFF8u;
        // 0x1dfffc: 0x3c1e0022  lui         $fp, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfff8) {
            ctx->pc = 0x1E0108u;
            return;
        }
    }
    ctx->pc = 0x1E0000u;
    // 0x1e0000: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e0000u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0004: 0xde240048  ld          $a0, 0x48($s1)
    ctx->pc = 0x1e0004u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x1e0008: 0xc082178  jal         func_2085E0
    ctx->pc = 0x1E0008u;
    SET_GPR_U32(ctx, 31, 0x1E0010u);
    ctx->pc = 0x1E000Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0008u;
    // 0x1e000c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E0u, 0x1E0008u, 0x1E0010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0010u;
label_1e0010:
    // 0x1e0010: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x1E0010u;
    {
        const bool branch_taken_0x1e0010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0010u;
        // 0x1e0014: 0x3c160022  lui         $s6, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0010) {
            ctx->pc = 0x1E010Cu;
            return;
        }
    }
    ctx->pc = 0x1E0018u;
    // 0x1e0018: 0xde240078  ld          $a0, 0x78($s1)
    ctx->pc = 0x1e0018u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x1e001c: 0xc082178  jal         func_2085E0
    ctx->pc = 0x1E001Cu;
    SET_GPR_U32(ctx, 31, 0x1E0024u);
    ctx->pc = 0x1E0020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E001Cu;
    // 0x1e0020: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E0u, 0x1E001Cu, 0x1E0024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0024u;
label_1e0024:
    // 0x1e0024: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x1E0024u;
    {
        const bool branch_taken_0x1e0024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0024u;
        // 0x1e0028: 0x8ec9a088  lw          $t1, -0x5F78($s6) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294942856)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0024) {
            ctx->pc = 0x1E0110u;
            return;
        }
    }
    ctx->pc = 0x1E002Cu;
    // 0x1e002c: 0x3413809c  ori         $s3, $zero, 0x809C
    ctx->pc = 0x1e002cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32924);
    // 0x1e0030: 0x139bfc  dsll32      $s3, $s3, 15
    ctx->pc = 0x1e0030u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << (32 + 15));
    // 0x1e0034: 0xde240058  ld          $a0, 0x58($s1)
    ctx->pc = 0x1e0034u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x1e0038: 0xc0820d8  jal         func_208360
    ctx->pc = 0x1E0038u;
    SET_GPR_U32(ctx, 31, 0x1E0040u);
    ctx->pc = 0x1E003Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0038u;
    // 0x1e003c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208360u, 0x1E0038u, 0x1E0040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0040u;
label_1e0040:
    // 0x1e0040: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e0040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0044: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1e0044u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0048: 0xc082178  jal         func_2085E0
    ctx->pc = 0x1E0048u;
    SET_GPR_U32(ctx, 31, 0x1E0050u);
    ctx->pc = 0x1E004Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0048u;
    // 0x1e004c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E0u, 0x1E0048u, 0x1E0050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0050u;
label_1e0050:
    // 0x1e0050: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E0050u;
    {
        const bool branch_taken_0x1e0050 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1e0050) {
            ctx->pc = 0x1E005Cu;
            return;
        }
    }
    ctx->pc = 0x1E0058u;
    // 0x1e0058: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1e0058u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1e005cu;
}
