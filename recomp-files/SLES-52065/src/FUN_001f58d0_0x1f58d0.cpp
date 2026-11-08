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

// Function: FUN_001f58d0
// Address: 0x1f58d0 - 0x1f59e4
void FUN_001f58d0_0x1f58d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f58d0_0x1f58d0");
#endif

    switch (ctx->pc) {
        case 0x1f5928u: goto label_1f5928;
        case 0x1f5974u: goto label_1f5974;
        case 0x1f5994u: goto label_1f5994;
        case 0x1f59b8u: goto label_1f59b8;
        default: break;
    }

    ctx->pc = 0x1f58d0u;

    // 0x1f58d0: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x1f58d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x1f58d4: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x1f58d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1f58d8: 0xffb20120  sd          $s2, 0x120($sp)
    ctx->pc = 0x1f58d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
    // 0x1f58dc: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x1f58dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x1f58e0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1f58e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f58e4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1f58e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f58e8: 0x24040070  addiu       $a0, $zero, 0x70
    ctx->pc = 0x1f58e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x1f58ec: 0x72442018  mult1       $a0, $s2, $a0
    ctx->pc = 0x1f58ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1f58f0: 0x2031818  mult        $v1, $s0, $v1
    ctx->pc = 0x1f58f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1f58f4: 0xffb30130  sd          $s3, 0x130($sp)
    ctx->pc = 0x1f58f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 19));
    // 0x1f58f8: 0x3c130039  lui         $s3, 0x39
    ctx->pc = 0x1f58f8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)57 << 16));
    // 0x1f58fc: 0xffbf0140  sd          $ra, 0x140($sp)
    ctx->pc = 0x1f58fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 31));
    // 0x1f5900: 0xffb10110  sd          $s1, 0x110($sp)
    ctx->pc = 0x1f5900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 17));
    // 0x1f5904: 0x266210d0  addiu       $v0, $s3, 0x10D0
    ctx->pc = 0x1f5904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4304));
    // 0x1f5908: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f5908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1f590c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1f590cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f5910: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1f5910u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5914: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x1f5914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1f5918: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F5918u;
    {
        const bool branch_taken_0x1f5918 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F591Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5918u;
        // 0x1f591c: 0x8c510004  lw          $s1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5918) {
            ctx->pc = 0x1F5930u;
            goto label_1f5930;
        }
    }
    ctx->pc = 0x1F5920u;
    // 0x1f5920: 0xc07ae70  jal         func_1EB9C0
    ctx->pc = 0x1F5920u;
    SET_GPR_U32(ctx, 31, 0x1F5928u);
    ctx->pc = 0x1EB9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB9C0u, 0x1F5920u, 0x1F5928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5928u;
label_1f5928:
    // 0x1f5928: 0x441001e  bgez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1F5928u;
    {
        const bool branch_taken_0x1f5928 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F592Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5928u;
        // 0x1f592c: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5928) {
            ctx->pc = 0x1F59A4u;
            goto label_1f59a4;
        }
    }
    ctx->pc = 0x1F5930u;
label_1f5930:
    // 0x1f5930: 0x2407001c  addiu       $a3, $zero, 0x1C
    ctx->pc = 0x1f5930u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1f5934: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x1f5934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x1f5938: 0x2073818  mult        $a3, $s0, $a3
    ctx->pc = 0x1f5938u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1f593c: 0x72431818  mult1       $v1, $s2, $v1
    ctx->pc = 0x1f593cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1f5940: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x1f5940u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f5944: 0x267310d0  addiu       $s3, $s3, 0x10D0
    ctx->pc = 0x1f5944u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4304));
    // 0x1f5948: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f5948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f594c: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x1f594cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1f5950: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1f5950u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1f5954: 0xe39021  addu        $s2, $a3, $v1
    ctx->pc = 0x1f5954u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1f5958: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x1f5958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x1f595c: 0x2721821  addu        $v1, $s3, $s2
    ctx->pc = 0x1f595cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x1f5960: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1f5960u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1f5964: 0x8c700008  lw          $s0, 0x8($v1)
    ctx->pc = 0x1f5964u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1f5968: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x1f5968u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
    // 0x1f596c: 0xc07afc6  jal         func_1EBF18
    ctx->pc = 0x1F596Cu;
    SET_GPR_U32(ctx, 31, 0x1F5974u);
    ctx->pc = 0x1F5970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F596Cu;
    // 0x1f5970: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EBF18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EBF18u, 0x1F596Cu, 0x1F5974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5974u;
label_1f5974:
    // 0x1f5974: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1f5974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1f5978: 0xafb00004  sw          $s0, 0x4($sp)
    ctx->pc = 0x1f5978u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
    // 0x1f597c: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x1f597cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x1f5980: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f5980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5984: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1f5984u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1f5988: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f5988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f598c: 0xc07ae78  jal         func_1EB9E0
    ctx->pc = 0x1F598Cu;
    SET_GPR_U32(ctx, 31, 0x1F5994u);
    ctx->pc = 0x1F5990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F598Cu;
    // 0x1f5990: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB9E0u, 0x1F598Cu, 0x1F5994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5994u;
label_1f5994:
    // 0x1f5994: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f5994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5998: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F5998u;
    {
        const bool branch_taken_0x1f5998 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F599Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5998u;
        // 0x1f599c: 0x2721821  addu        $v1, $s3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5998) {
            ctx->pc = 0x1F59C0u;
            goto label_1f59c0;
        }
    }
    ctx->pc = 0x1F59A0u;
    // 0x1f59a0: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1f59a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_1f59a4:
    // 0x1f59a4: 0x8c43bab4  lw          $v1, -0x454C($v0)
    ctx->pc = 0x1f59a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949556)));
    // 0x1f59a8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F59A8u;
    {
        const bool branch_taken_0x1f59a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F59ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F59A8u;
        // 0x1f59ac: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f59a8) {
            ctx->pc = 0x1F59B8u;
            goto label_1f59b8;
        }
    }
    ctx->pc = 0x1F59B0u;
    // 0x1f59b0: 0xc0400e8  jal         func_1003A0
    ctx->pc = 0x1F59B0u;
    SET_GPR_U32(ctx, 31, 0x1F59B8u);
    ctx->pc = 0x1F59B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F59B0u;
    // 0x1f59b4: 0x24844508  addiu       $a0, $a0, 0x4508 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003A0u, 0x1F59B0u, 0x1F59B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F59B8u;
label_1f59b8:
    // 0x1f59b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F59B8u;
    {
        const bool branch_taken_0x1f59b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F59BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F59B8u;
        // 0x1f59bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f59b8) {
            ctx->pc = 0x1F59C8u;
            goto label_1f59c8;
        }
    }
    ctx->pc = 0x1F59C0u;
label_1f59c0:
    // 0x1f59c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f59c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f59c4: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x1f59c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_1f59c8:
    // 0x1f59c8: 0xdfbf0140  ld          $ra, 0x140($sp)
    ctx->pc = 0x1f59c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1f59cc: 0xdfb30130  ld          $s3, 0x130($sp)
    ctx->pc = 0x1f59ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1f59d0: 0xdfb20120  ld          $s2, 0x120($sp)
    ctx->pc = 0x1f59d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1f59d4: 0xdfb10110  ld          $s1, 0x110($sp)
    ctx->pc = 0x1f59d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1f59d8: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x1f59d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1f59dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1F59DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F59E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F59DCu;
        // 0x1f59e0: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F59DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F59E4u;
}
