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

// Function: FUN_00200168
// Address: 0x200168 - 0x200268
void FUN_00200168_0x200168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00200168_0x200168");
#endif

    switch (ctx->pc) {
        case 0x2001b4u: goto label_2001b4;
        case 0x2001dcu: goto label_2001dc;
        case 0x2001f0u: goto label_2001f0;
        case 0x200208u: goto label_200208;
        case 0x20022cu: goto label_20022c;
        case 0x20023cu: goto label_20023c;
        default: break;
    }

    ctx->pc = 0x200168u;

    // 0x200168: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x200168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x20016c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x20016cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x200170: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x200170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x200174: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x200174u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200178: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x200178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x20017c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x20017cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200180: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x200180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x200184: 0x32230003  andi        $v1, $s1, 0x3
    ctx->pc = 0x200184u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
    // 0x200188: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x200188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20018c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x20018Cu;
    {
        const bool branch_taken_0x20018c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x200190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20018Cu;
        // 0x200190: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20018c) {
            ctx->pc = 0x2001B8u;
            goto label_2001b8;
        }
    }
    ctx->pc = 0x200194u;
    // 0x200194: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x200194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x200198: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x200198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x20019c: 0x24424f88  addiu       $v0, $v0, 0x4F88
    ctx->pc = 0x20019cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20360));
    // 0x2001a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2001a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2001a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2001a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2001a8: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x2001a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2001ac: 0xc07fed6  jal         func_1FFB58
    ctx->pc = 0x2001ACu;
    SET_GPR_U32(ctx, 31, 0x2001B4u);
    ctx->pc = 0x2001B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2001ACu;
    // 0x2001b0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFB58u, 0x2001ACu, 0x2001B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2001B4u;
label_2001b4:
    // 0x2001b4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2001b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2001b8:
    // 0x2001b8: 0x118883  sra         $s1, $s1, 2
    ctx->pc = 0x2001b8u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 2));
    // 0x2001bc: 0x12200023  beqz        $s1, . + 4 + (0x23 << 2)
    ctx->pc = 0x2001BCu;
    {
        const bool branch_taken_0x2001bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2001C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2001BCu;
        // 0x2001c0: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2001bc) {
            ctx->pc = 0x20024Cu;
            goto label_20024c;
        }
    }
    ctx->pc = 0x2001C4u;
    // 0x2001c4: 0x8e700048  lw          $s0, 0x48($s3)
    ctx->pc = 0x2001c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x2001c8: 0x16000013  bnez        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2001C8u;
    {
        const bool branch_taken_0x2001c8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2001CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2001C8u;
        // 0x2001cc: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2001c8) {
            ctx->pc = 0x200218u;
            goto label_200218;
        }
    }
    ctx->pc = 0x2001D0u;
    // 0x2001d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2001d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2001d4: 0xc07ffc0  jal         func_1FFF00
    ctx->pc = 0x2001D4u;
    SET_GPR_U32(ctx, 31, 0x2001DCu);
    ctx->pc = 0x2001D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2001D4u;
    // 0x2001d8: 0x24050271  addiu       $a1, $zero, 0x271 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 625));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFF00u, 0x2001D4u, 0x2001DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2001DCu;
label_2001dc:
    // 0x2001dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2001dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2001e0: 0xae620048  sw          $v0, 0x48($s3)
    ctx->pc = 0x2001e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 2));
    // 0x2001e4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2001E4u;
    {
        const bool branch_taken_0x2001e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2001E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2001E4u;
        // 0x2001e8: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2001e4) {
            ctx->pc = 0x200214u;
            goto label_200214;
        }
    }
    ctx->pc = 0x2001ECu;
    // 0x2001ec: 0x0  nop
    ctx->pc = 0x2001ecu;
    // NOP
label_2001f0:
    // 0x2001f0: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2001F0u;
    {
        const bool branch_taken_0x2001f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2001f0) {
            ctx->pc = 0x2001F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2001F0u;
            // 0x2001f4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200214u;
            goto label_200214;
        }
    }
    ctx->pc = 0x2001F8u;
    // 0x2001f8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2001f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2001fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2001fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200200: 0xc07ffce  jal         func_1FFF38
    ctx->pc = 0x200200u;
    SET_GPR_U32(ctx, 31, 0x200208u);
    ctx->pc = 0x200204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200200u;
    // 0x200204: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFF38u, 0x200200u, 0x200208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200208u;
label_200208:
    // 0x200208: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x200208u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x20020c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x20020cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x200210: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x200210u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_200214:
    // 0x200214: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x200214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_200218:
    // 0x200218: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x200218u;
    {
        const bool branch_taken_0x200218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20021Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200218u;
        // 0x20021c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200218) {
            ctx->pc = 0x20023Cu;
            goto label_20023c;
        }
    }
    ctx->pc = 0x200220u;
    // 0x200220: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x200220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200224: 0xc07ffce  jal         func_1FFF38
    ctx->pc = 0x200224u;
    SET_GPR_U32(ctx, 31, 0x20022Cu);
    ctx->pc = 0x200228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200224u;
    // 0x200228: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFF38u, 0x200224u, 0x20022Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20022Cu;
label_20022c:
    // 0x20022c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x20022cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200230: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x200230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200234: 0xc07feca  jal         func_1FFB28
    ctx->pc = 0x200234u;
    SET_GPR_U32(ctx, 31, 0x20023Cu);
    ctx->pc = 0x200238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200234u;
    // 0x200238: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFB28u, 0x200234u, 0x20023Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20023Cu;
label_20023c:
    // 0x20023c: 0x118843  sra         $s1, $s1, 1
    ctx->pc = 0x20023cu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 1));
    // 0x200240: 0x5620ffeb  bnel        $s1, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x200240u;
    {
        const bool branch_taken_0x200240 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x200240) {
            ctx->pc = 0x200244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200240u;
            // 0x200244: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2001F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2001f0;
        }
    }
    ctx->pc = 0x200248u;
    // 0x200248: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x200248u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_20024c:
    // 0x20024c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x20024cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x200250: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x200250u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x200254: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x200254u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x200258: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x200258u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20025c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20025cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x200260: 0x3e00008  jr          $ra
    ctx->pc = 0x200260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200260u;
        // 0x200264: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200268u;
}
