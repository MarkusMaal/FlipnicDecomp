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

// Function: FUN_00203aa8
// Address: 0x203aa8 - 0x204fc0
void FUN_00203aa8_0x203aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00203aa8_0x203aa8");
#endif

    switch (ctx->pc) {
        case 0x203ae8u: goto label_203ae8;
        case 0x203b1cu: goto label_203b1c;
        case 0x203b58u: goto label_203b58;
        case 0x203b88u: goto label_203b88;
        case 0x203b90u: goto label_203b90;
        case 0x203bb0u: goto label_203bb0;
        case 0x203c1cu: goto label_203c1c;
        case 0x203c5cu: goto label_203c5c;
        case 0x203c64u: goto label_203c64;
        case 0x203c68u: goto label_203c68;
        case 0x203c6cu: goto label_203c6c;
        case 0x203c80u: goto label_203c80;
        case 0x203cfcu: goto label_203cfc;
        case 0x203d40u: goto label_203d40;
        case 0x203d58u: goto label_203d58;
        case 0x203da8u: goto label_203da8;
        case 0x203e24u: goto label_203e24;
        case 0x203e78u: goto label_203e78;
        case 0x203e8cu: goto label_203e8c;
        case 0x203eb8u: goto label_203eb8;
        case 0x203ed0u: goto label_203ed0;
        case 0x203ef8u: goto label_203ef8;
        case 0x203f08u: goto label_203f08;
        case 0x203f30u: goto label_203f30;
        case 0x203f6cu: goto label_203f6c;
        case 0x203fd0u: goto label_203fd0;
        case 0x204088u: goto label_204088;
        case 0x2040d4u: goto label_2040d4;
        case 0x2040e8u: goto label_2040e8;
        case 0x204128u: goto label_204128;
        case 0x20413cu: goto label_20413c;
        case 0x204160u: goto label_204160;
        case 0x204184u: goto label_204184;
        case 0x204198u: goto label_204198;
        case 0x2041b4u: goto label_2041b4;
        case 0x2041f8u: goto label_2041f8;
        case 0x204250u: goto label_204250;
        case 0x204268u: goto label_204268;
        case 0x2042b8u: goto label_2042b8;
        case 0x2042c4u: goto label_2042c4;
        case 0x2042e0u: goto label_2042e0;
        case 0x204320u: goto label_204320;
        case 0x20437cu: goto label_20437c;
        case 0x2043e8u: goto label_2043e8;
        case 0x20442cu: goto label_20442c;
        case 0x204484u: goto label_204484;
        case 0x204534u: goto label_204534;
        case 0x204578u: goto label_204578;
        case 0x2045b8u: goto label_2045b8;
        case 0x20460cu: goto label_20460c;
        case 0x204640u: goto label_204640;
        case 0x204680u: goto label_204680;
        case 0x2046d4u: goto label_2046d4;
        case 0x204724u: goto label_204724;
        case 0x204770u: goto label_204770;
        case 0x2047d4u: goto label_2047d4;
        case 0x2047f8u: goto label_2047f8;
        case 0x204838u: goto label_204838;
        case 0x2048d4u: goto label_2048d4;
        case 0x204918u: goto label_204918;
        case 0x204938u: goto label_204938;
        case 0x204978u: goto label_204978;
        case 0x2049d4u: goto label_2049d4;
        case 0x204a60u: goto label_204a60;
        case 0x204a88u: goto label_204a88;
        case 0x204ac8u: goto label_204ac8;
        case 0x204b24u: goto label_204b24;
        case 0x204ba4u: goto label_204ba4;
        case 0x204bf8u: goto label_204bf8;
        case 0x204cb4u: goto label_204cb4;
        case 0x204cc8u: goto label_204cc8;
        case 0x204d28u: goto label_204d28;
        case 0x204d68u: goto label_204d68;
        case 0x204df4u: goto label_204df4;
        case 0x204e3cu: goto label_204e3c;
        case 0x204e68u: goto label_204e68;
        case 0x204eacu: goto label_204eac;
        case 0x204f08u: goto label_204f08;
        case 0x204f44u: goto label_204f44;
        case 0x204f58u: goto label_204f58;
        case 0x204f6cu: goto label_204f6c;
        default: break;
    }

    ctx->pc = 0x203aa8u;

    // 0x203aa8: 0x27bdfd30  addiu       $sp, $sp, -0x2D0
    ctx->pc = 0x203aa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966576));
    // 0x203aac: 0xffb40270  sd          $s4, 0x270($sp)
    ctx->pc = 0x203aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 20));
    // 0x203ab0: 0xffb00230  sd          $s0, 0x230($sp)
    ctx->pc = 0x203ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 560), GPR_U64(ctx, 16));
    // 0x203ab4: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x203ab4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203ab8: 0xafa501e8  sw          $a1, 0x1E8($sp)
    ctx->pc = 0x203ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 488), GPR_U32(ctx, 5));
    // 0x203abc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x203abcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203ac0: 0xffbf02c0  sd          $ra, 0x2C0($sp)
    ctx->pc = 0x203ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 704), GPR_U64(ctx, 31));
    // 0x203ac4: 0xffbe02b0  sd          $fp, 0x2B0($sp)
    ctx->pc = 0x203ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 688), GPR_U64(ctx, 30));
    // 0x203ac8: 0xffb702a0  sd          $s7, 0x2A0($sp)
    ctx->pc = 0x203ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 672), GPR_U64(ctx, 23));
    // 0x203acc: 0xffb60290  sd          $s6, 0x290($sp)
    ctx->pc = 0x203accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 656), GPR_U64(ctx, 22));
    // 0x203ad0: 0xffb50280  sd          $s5, 0x280($sp)
    ctx->pc = 0x203ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 640), GPR_U64(ctx, 21));
    // 0x203ad4: 0xffb30260  sd          $s3, 0x260($sp)
    ctx->pc = 0x203ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 19));
    // 0x203ad8: 0xffb20250  sd          $s2, 0x250($sp)
    ctx->pc = 0x203ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 592), GPR_U64(ctx, 18));
    // 0x203adc: 0xffb10240  sd          $s1, 0x240($sp)
    ctx->pc = 0x203adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 576), GPR_U64(ctx, 17));
    // 0x203ae0: 0xc07fa18  jal         func_1FE860
    ctx->pc = 0x203AE0u;
    SET_GPR_U32(ctx, 31, 0x203AE8u);
    ctx->pc = 0x203AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203AE0u;
    // 0x203ae4: 0xafa401e4  sw          $a0, 0x1E4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 484), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE860u, 0x203AE0u, 0x203AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203AE8u;
label_203ae8:
    // 0x203ae8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x203ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x203aec: 0xafa201f8  sw          $v0, 0x1F8($sp)
    ctx->pc = 0x203aecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 2));
    // 0x203af0: 0x8fa201e8  lw          $v0, 0x1E8($sp)
    ctx->pc = 0x203af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x203af4: 0x9443000c  lhu         $v1, 0xC($v0)
    ctx->pc = 0x203af4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x203af8: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x203af8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x203afc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x203AFCu;
    {
        const bool branch_taken_0x203afc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203AFCu;
        // 0x203b00: 0xafa001d8  sw          $zero, 0x1D8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203afc) {
            ctx->pc = 0x203B14u;
            goto label_203b14;
        }
    }
    ctx->pc = 0x203B04u;
    // 0x203b04: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x203b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x203b08: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x203b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x203b0c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x203B0Cu;
    {
        const bool branch_taken_0x203b0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x203B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203B0Cu;
        // 0x203b10: 0x3063001a  andi        $v1, $v1, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)26);
        ctx->in_delay_slot = false;
        if (branch_taken_0x203b0c) {
            ctx->pc = 0x203B30u;
            goto label_203b30;
        }
    }
    ctx->pc = 0x203B14u;
label_203b14:
    // 0x203b14: 0xc08180c  jal         func_206030
    ctx->pc = 0x203B14u;
    SET_GPR_U32(ctx, 31, 0x203B1Cu);
    ctx->pc = 0x203B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203B14u;
    // 0x203b18: 0x8fa401e8  lw          $a0, 0x1E8($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206030u, 0x203B14u, 0x203B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203B1Cu;
label_203b1c:
    // 0x203b1c: 0x1440051c  bnez        $v0, . + 4 + (0x51C << 2)
    ctx->pc = 0x203B1Cu;
    {
        const bool branch_taken_0x203b1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x203B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203B1Cu;
        // 0x203b20: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203b1c) {
            ctx->pc = 0x204F90u;
            goto label_204f90;
        }
    }
    ctx->pc = 0x203B24u;
    // 0x203b24: 0x8fa501e8  lw          $a1, 0x1E8($sp)
    ctx->pc = 0x203b24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x203b28: 0x94a3000c  lhu         $v1, 0xC($a1)
    ctx->pc = 0x203b28u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x203b2c: 0x3063001a  andi        $v1, $v1, 0x1A
    ctx->pc = 0x203b2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)26);
label_203b30:
    // 0x203b30: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x203b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x203b34: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x203B34u;
    {
        const bool branch_taken_0x203b34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x203B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203B34u;
        // 0x203b38: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203b34) {
            ctx->pc = 0x203B60u;
            goto label_203b60;
        }
    }
    ctx->pc = 0x203B3Cu;
    // 0x203b3c: 0x8fa601e8  lw          $a2, 0x1E8($sp)
    ctx->pc = 0x203b3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x203b40: 0x84c2000e  lh          $v0, 0xE($a2)
    ctx->pc = 0x203b40u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 14)));
    // 0x203b44: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x203B44u;
    {
        const bool branch_taken_0x203b44 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x203B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203B44u;
        // 0x203b48: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203b44) {
            ctx->pc = 0x203B60u;
            goto label_203b60;
        }
    }
    ctx->pc = 0x203B4Cu;
    // 0x203b4c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x203b4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203b50: 0xc080e5e  jal         func_203978
    ctx->pc = 0x203B50u;
    SET_GPR_U32(ctx, 31, 0x203B58u);
    ctx->pc = 0x203B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203B50u;
    // 0x203b54: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203978u, 0x203B50u, 0x203B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203B58u;
label_203b58:
    // 0x203b58: 0x1000050e  b           . + 4 + (0x50E << 2)
    ctx->pc = 0x203B58u;
    {
        const bool branch_taken_0x203b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203B58u;
        // 0x203b5c: 0xdfbf02c0  ld          $ra, 0x2C0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203b58) {
            ctx->pc = 0x204F94u;
            goto label_204f94;
        }
    }
    ctx->pc = 0x203B60u;
label_203b60:
    // 0x203b60: 0x27a201d4  addiu       $v0, $sp, 0x1D4
    ctx->pc = 0x203b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 468));
    // 0x203b64: 0x27a301d8  addiu       $v1, $sp, 0x1D8
    ctx->pc = 0x203b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
    // 0x203b68: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x203b68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x203b6c: 0xafb10010  sw          $s1, 0x10($sp)
    ctx->pc = 0x203b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 17));
    // 0x203b70: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x203b70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x203b74: 0xafb001ec  sw          $s0, 0x1EC($sp)
    ctx->pc = 0x203b74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 16));
    // 0x203b78: 0xafa001f0  sw          $zero, 0x1F0($sp)
    ctx->pc = 0x203b78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 0));
    // 0x203b7c: 0xafa20218  sw          $v0, 0x218($sp)
    ctx->pc = 0x203b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 536), GPR_U32(ctx, 2));
    // 0x203b80: 0xafa3021c  sw          $v1, 0x21C($sp)
    ctx->pc = 0x203b80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 540), GPR_U32(ctx, 3));
    // 0x203b84: 0x0  nop
    ctx->pc = 0x203b84u;
    // NOP
label_203b88:
    // 0x203b88: 0x8fb301ec  lw          $s3, 0x1EC($sp)
    ctx->pc = 0x203b88u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x203b8c: 0x24120025  addiu       $s2, $zero, 0x25
    ctx->pc = 0x203b8cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_203b90:
    // 0x203b90: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x203b90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x203b94: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x203b94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x203b98: 0x8ca4d9ac  lw          $a0, -0x2654($a1)
    ctx->pc = 0x203b98u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x21D9ACu));
    // 0x203b9c: 0x8cc7d9b0  lw          $a3, -0x2650($a2)
    ctx->pc = 0x203b9cu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x21D9B0u));
    // 0x203ba0: 0x8fa50218  lw          $a1, 0x218($sp)
    ctx->pc = 0x203ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x203ba4: 0x8fa601ec  lw          $a2, 0x1EC($sp)
    ctx->pc = 0x203ba4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x203ba8: 0xc07fd90  jal         func_1FF640
    ctx->pc = 0x203BA8u;
    SET_GPR_U32(ctx, 31, 0x203BB0u);
    ctx->pc = 0x203BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203BA8u;
    // 0x203bac: 0x8fa8021c  lw          $t0, 0x21C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 540)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF640u, 0x203BA8u, 0x203BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203BB0u;
label_203bb0:
    // 0x203bb0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x203bb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203bb4: 0x1a000007  blez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x203BB4u;
    {
        const bool branch_taken_0x203bb4 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x203BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203BB4u;
        // 0x203bb8: 0x8fa301ec  lw          $v1, 0x1EC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203bb4) {
            ctx->pc = 0x203BD4u;
            goto label_203bd4;
        }
    }
    ctx->pc = 0x203BBCu;
    // 0x203bbc: 0x8fa201d4  lw          $v0, 0x1D4($sp)
    ctx->pc = 0x203bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
    // 0x203bc0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x203bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x203bc4: 0x1452fff2  bne         $v0, $s2, . + 4 + (-0xE << 2)
    ctx->pc = 0x203BC4u;
    {
        const bool branch_taken_0x203bc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x203BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203BC4u;
        // 0x203bc8: 0xafa301ec  sw          $v1, 0x1EC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203bc4) {
            ctx->pc = 0x203B90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_203b90;
        }
    }
    ctx->pc = 0x203BCCu;
    // 0x203bcc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x203bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x203bd0: 0xafa301ec  sw          $v1, 0x1EC($sp)
    ctx->pc = 0x203bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 3));
label_203bd4:
    // 0x203bd4: 0x8fa401ec  lw          $a0, 0x1EC($sp)
    ctx->pc = 0x203bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x203bd8: 0x939023  subu        $s2, $a0, $s3
    ctx->pc = 0x203bd8u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x203bdc: 0x12400014  beqz        $s2, . + 4 + (0x14 << 2)
    ctx->pc = 0x203BDCu;
    {
        const bool branch_taken_0x203bdc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x203bdc) {
            ctx->pc = 0x203C30u;
            goto label_203c30;
        }
    }
    ctx->pc = 0x203BE4u;
    // 0x203be4: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x203be4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
    // 0x203be8: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x203be8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x203bec: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x203becu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x203bf0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x203bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x203bf4: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x203bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x203bf8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x203bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x203bfc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x203bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x203c00: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x203c00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x203c04: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x203c04u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x203c08: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x203C08u;
    {
        const bool branch_taken_0x203c08 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x203C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203C08u;
        // 0x203c0c: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203c08) {
            ctx->pc = 0x203C24u;
            goto label_203c24;
        }
    }
    ctx->pc = 0x203C10u;
    // 0x203c10: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x203c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x203c14: 0xc080e4c  jal         func_203930
    ctx->pc = 0x203C14u;
    SET_GPR_U32(ctx, 31, 0x203C1Cu);
    ctx->pc = 0x203C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203C14u;
    // 0x203c18: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203930u, 0x203C14u, 0x203C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203C1Cu;
label_203c1c:
    // 0x203c1c: 0x144004d6  bnez        $v0, . + 4 + (0x4D6 << 2)
    ctx->pc = 0x203C1Cu;
    {
        const bool branch_taken_0x203c1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x203C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203C1Cu;
        // 0x203c20: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203c1c) {
            ctx->pc = 0x204F78u;
            goto label_204f78;
        }
    }
    ctx->pc = 0x203C24u;
label_203c24:
    // 0x203c24: 0x8fa501f0  lw          $a1, 0x1F0($sp)
    ctx->pc = 0x203c24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x203c28: 0xb22821  addu        $a1, $a1, $s2
    ctx->pc = 0x203c28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x203c2c: 0xafa501f0  sw          $a1, 0x1F0($sp)
    ctx->pc = 0x203c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 5));
label_203c30:
    // 0x203c30: 0x1a0004c9  blez        $s0, . + 4 + (0x4C9 << 2)
    ctx->pc = 0x203C30u;
    {
        const bool branch_taken_0x203c30 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x203C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203C30u;
        // 0x203c34: 0x8fa601ec  lw          $a2, 0x1EC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203c30) {
            ctx->pc = 0x204F58u;
            goto label_204f58;
        }
    }
    ctx->pc = 0x203C38u;
    // 0x203c38: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x203c38u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203c3c: 0xafa0020c  sw          $zero, 0x20C($sp)
    ctx->pc = 0x203c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 0));
    // 0x203c40: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x203c40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x203c44: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x203c44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x203c48: 0xafa001f4  sw          $zero, 0x1F4($sp)
    ctx->pc = 0x203c48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 500), GPR_U32(ctx, 0));
    // 0x203c4c: 0xafa601ec  sw          $a2, 0x1EC($sp)
    ctx->pc = 0x203c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 6));
    // 0x203c50: 0xa3a001d1  sb          $zero, 0x1D1($sp)
    ctx->pc = 0x203c50u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 0));
    // 0x203c54: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x203C54u;
    {
        const bool branch_taken_0x203c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203C54u;
        // 0x203c58: 0x90c40000  lbu         $a0, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203c54) {
            ctx->pc = 0x203C6Cu;
            goto label_203c6c;
        }
    }
    ctx->pc = 0x203C5Cu;
label_203c5c:
    // 0x203c5c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x203C5Cu;
    {
        const bool branch_taken_0x203c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203C5Cu;
        // 0x203c60: 0x90440000  lbu         $a0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203c5c) {
            ctx->pc = 0x203C6Cu;
            goto label_203c6c;
        }
    }
    ctx->pc = 0x203C64u;
label_203c64:
    // 0x203c64: 0x8fa301ec  lw          $v1, 0x1EC($sp)
    ctx->pc = 0x203c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
label_203c68:
    // 0x203c68: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x203c68u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_203c6c:
    // 0x203c6c: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x203c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x203c70: 0x8fa401ec  lw          $a0, 0x1EC($sp)
    ctx->pc = 0x203c70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x203c74: 0x2be03  sra         $s7, $v0, 24
    ctx->pc = 0x203c74u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 2), 24));
    // 0x203c78: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x203c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x203c7c: 0xafa401ec  sw          $a0, 0x1EC($sp)
    ctx->pc = 0x203c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 4));
label_203c80:
    // 0x203c80: 0x26e3ffe0  addiu       $v1, $s7, -0x20
    ctx->pc = 0x203c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967264));
    // 0x203c84: 0x2c620059  sltiu       $v0, $v1, 0x59
    ctx->pc = 0x203c84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)89) ? 1 : 0);
    // 0x203c88: 0x104001b6  beqz        $v0, . + 4 + (0x1B6 << 2)
    ctx->pc = 0x203C88u;
    {
        const bool branch_taken_0x203c88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203C88u;
        // 0x203c8c: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203c88) {
            ctx->pc = 0x204364u;
            goto label_204364;
        }
    }
    ctx->pc = 0x203C90u;
    // 0x203c90: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x203c90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x203c94: 0x24425220  addiu       $v0, $v0, 0x5220
    ctx->pc = 0x203c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21024));
    // 0x203c98: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x203c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x203c9c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x203c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x203ca0: 0x800008  jr          $a0
    ctx->pc = 0x203CA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x203CA8u: goto label_203ca8;
            case 0x203CC0u: goto label_203cc0;
            case 0x203CD0u: goto label_203cd0;
            case 0x203CE8u: goto label_203ce8;
            case 0x203CF4u: goto label_203cf4;
            case 0x203D08u: goto label_203d08;
            case 0x203D94u: goto label_203d94;
            case 0x203DA0u: goto label_203da0;
            case 0x203DD8u: goto label_203dd8;
            case 0x203DE8u: goto label_203de8;
            case 0x203DF8u: goto label_203df8;
            case 0x203E2Cu: goto label_203e2c;
            case 0x203E3Cu: goto label_203e3c;
            case 0x203E5Cu: goto label_203e5c;
            case 0x203E60u: goto label_203e60;
            case 0x203EA4u: goto label_203ea4;
            case 0x20406Cu: goto label_20406c;
            case 0x2040B8u: goto label_2040b8;
            case 0x2040BCu: goto label_2040bc;
            case 0x2040F0u: goto label_2040f0;
            case 0x204114u: goto label_204114;
            case 0x204168u: goto label_204168;
            case 0x20416Cu: goto label_20416c;
            case 0x2041A0u: goto label_2041a0;
            case 0x2041ACu: goto label_2041ac;
            case 0x204364u: goto label_204364;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203CA0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x203CA8u;
label_203ca8:
    // 0x203ca8: 0x83a201d1  lb          $v0, 0x1D1($sp)
    ctx->pc = 0x203ca8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 465)));
    // 0x203cac: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x203CACu;
    {
        const bool branch_taken_0x203cac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x203CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203CACu;
        // 0x203cb0: 0x8fa201ec  lw          $v0, 0x1EC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203cac) {
            ctx->pc = 0x203C5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_203c5c;
        }
    }
    ctx->pc = 0x203CB4u;
    // 0x203cb4: 0x8fa501ec  lw          $a1, 0x1EC($sp)
    ctx->pc = 0x203cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x203cb8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x203CB8u;
    {
        const bool branch_taken_0x203cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203CB8u;
        // 0x203cbc: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203cb8) {
            ctx->pc = 0x203CFCu;
            goto label_203cfc;
        }
    }
    ctx->pc = 0x203CC0u;
label_203cc0:
    // 0x203cc0: 0x8fa601ec  lw          $a2, 0x1EC($sp)
    ctx->pc = 0x203cc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x203cc4: 0x37de0001  ori         $fp, $fp, 0x1
    ctx->pc = 0x203cc4u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)1);
    // 0x203cc8: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x203CC8u;
    {
        const bool branch_taken_0x203cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203CC8u;
        // 0x203ccc: 0x90c40000  lbu         $a0, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203cc8) {
            ctx->pc = 0x203C6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_203c6c;
        }
    }
    ctx->pc = 0x203CD0u;
label_203cd0:
    // 0x203cd0: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x203cd0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x203cd4: 0x8e82fff8  lw          $v0, -0x8($s4)
    ctx->pc = 0x203cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
    // 0x203cd8: 0x441ffe2  bgez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x203CD8u;
    {
        const bool branch_taken_0x203cd8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x203CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203CD8u;
        // 0x203cdc: 0xafa201f4  sw          $v0, 0x1F4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 500), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203cd8) {
            ctx->pc = 0x203C64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_203c64;
        }
    }
    ctx->pc = 0x203CE0u;
    // 0x203ce0: 0x21023  negu        $v0, $v0
    ctx->pc = 0x203ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x203ce4: 0xafa201f4  sw          $v0, 0x1F4($sp)
    ctx->pc = 0x203ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 500), GPR_U32(ctx, 2));
label_203ce8:
    // 0x203ce8: 0x8fa301ec  lw          $v1, 0x1EC($sp)
    ctx->pc = 0x203ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x203cec: 0x1000ffde  b           . + 4 + (-0x22 << 2)
    ctx->pc = 0x203CECu;
    {
        const bool branch_taken_0x203cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203CECu;
        // 0x203cf0: 0x37de0004  ori         $fp, $fp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x203cec) {
            ctx->pc = 0x203C68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_203c68;
        }
    }
    ctx->pc = 0x203CF4u;
label_203cf4:
    // 0x203cf4: 0x8fa501ec  lw          $a1, 0x1EC($sp)
    ctx->pc = 0x203cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x203cf8: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x203cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_203cfc:
    // 0x203cfc: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x203cfcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x203d00: 0x1000ffda  b           . + 4 + (-0x26 << 2)
    ctx->pc = 0x203D00u;
    {
        const bool branch_taken_0x203d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203D00u;
        // 0x203d04: 0xa3a201d1  sb          $v0, 0x1D1($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203d00) {
            ctx->pc = 0x203C6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_203c6c;
        }
    }
    ctx->pc = 0x203D08u;
label_203d08:
    // 0x203d08: 0x8fa601ec  lw          $a2, 0x1EC($sp)
    ctx->pc = 0x203d08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x203d0c: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x203d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x203d10: 0x80d70000  lb          $s7, 0x0($a2)
    ctx->pc = 0x203d10u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x203d14: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x203d14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x203d18: 0x16e20009  bne         $s7, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x203D18u;
    {
        const bool branch_taken_0x203d18 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x203D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203D18u;
        // 0x203d1c: 0xafa601ec  sw          $a2, 0x1EC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203d18) {
            ctx->pc = 0x203D40u;
            goto label_203d40;
        }
    }
    ctx->pc = 0x203D20u;
    // 0x203d20: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x203d20u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x203d24: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x203d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x203d28: 0x8e90fff8  lw          $s0, -0x8($s4)
    ctx->pc = 0x203d28u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
    // 0x203d2c: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x203d2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x203d30: 0x90c40000  lbu         $a0, 0x0($a2)
    ctx->pc = 0x203d30u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x203d34: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x203d34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x203d38: 0x1000ffcc  b           . + 4 + (-0x34 << 2)
    ctx->pc = 0x203D38u;
    {
        const bool branch_taken_0x203d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203D38u;
        // 0x203d3c: 0x202900b  movn        $s2, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203d38) {
            ctx->pc = 0x203C6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_203c6c;
        }
    }
    ctx->pc = 0x203D40u;
label_203d40:
    // 0x203d40: 0x26e2ffd0  addiu       $v0, $s7, -0x30
    ctx->pc = 0x203d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967248));
    // 0x203d44: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x203d44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x203d48: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x203D48u;
    {
        const bool branch_taken_0x203d48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203D48u;
        // 0x203d4c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203d48) {
            ctx->pc = 0x203D80u;
            goto label_203d80;
        }
    }
    ctx->pc = 0x203D50u;
    // 0x203d50: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x203d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x203d54: 0x2031018  mult        $v0, $s0, $v1
    ctx->pc = 0x203d54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_203d58:
    // 0x203d58: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x203d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x203d5c: 0x578021  addu        $s0, $v0, $s7
    ctx->pc = 0x203d5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x203d60: 0x8fa201ec  lw          $v0, 0x1EC($sp)
    ctx->pc = 0x203d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x203d64: 0x80570000  lb          $s7, 0x0($v0)
    ctx->pc = 0x203d64u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x203d68: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x203d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x203d6c: 0xafa201ec  sw          $v0, 0x1EC($sp)
    ctx->pc = 0x203d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 2));
    // 0x203d70: 0x26e2ffd0  addiu       $v0, $s7, -0x30
    ctx->pc = 0x203d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967248));
    // 0x203d74: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x203d74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x203d78: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x203D78u;
    {
        const bool branch_taken_0x203d78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x203D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203D78u;
        // 0x203d7c: 0x2031018  mult        $v0, $s0, $v1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x203d78) {
            ctx->pc = 0x203D58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_203d58;
        }
    }
    ctx->pc = 0x203D80u;
label_203d80:
    // 0x203d80: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x203d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x203d84: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x203d84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x203d88: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x203d88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x203d8c: 0x1000ffbc  b           . + 4 + (-0x44 << 2)
    ctx->pc = 0x203D8Cu;
    {
        const bool branch_taken_0x203d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203D8Cu;
        // 0x203d90: 0x202900b  movn        $s2, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203d8c) {
            ctx->pc = 0x203C80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_203c80;
        }
    }
    ctx->pc = 0x203D94u;
label_203d94:
    // 0x203d94: 0x8fa301ec  lw          $v1, 0x1EC($sp)
    ctx->pc = 0x203d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x203d98: 0x1000ffb3  b           . + 4 + (-0x4D << 2)
    ctx->pc = 0x203D98u;
    {
        const bool branch_taken_0x203d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203D98u;
        // 0x203d9c: 0x37de0080  ori         $fp, $fp, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x203d98) {
            ctx->pc = 0x203C68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_203c68;
        }
    }
    ctx->pc = 0x203DA0u;
label_203da0:
    // 0x203da0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x203da0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203da4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x203da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_203da8:
    // 0x203da8: 0x2031018  mult        $v0, $s0, $v1
    ctx->pc = 0x203da8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x203dac: 0x8fa401ec  lw          $a0, 0x1EC($sp)
    ctx->pc = 0x203dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x203db0: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x203db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x203db4: 0x578021  addu        $s0, $v0, $s7
    ctx->pc = 0x203db4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x203db8: 0x80970000  lb          $s7, 0x0($a0)
    ctx->pc = 0x203db8u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x203dbc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x203dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x203dc0: 0x26e2ffd0  addiu       $v0, $s7, -0x30
    ctx->pc = 0x203dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967248));
    // 0x203dc4: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x203dc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x203dc8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x203DC8u;
    {
        const bool branch_taken_0x203dc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x203DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203DC8u;
        // 0x203dcc: 0xafa401ec  sw          $a0, 0x1EC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203dc8) {
            ctx->pc = 0x203DA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_203da8;
        }
    }
    ctx->pc = 0x203DD0u;
    // 0x203dd0: 0x1000ffab  b           . + 4 + (-0x55 << 2)
    ctx->pc = 0x203DD0u;
    {
        const bool branch_taken_0x203dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203DD0u;
        // 0x203dd4: 0xafb001f4  sw          $s0, 0x1F4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 500), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203dd0) {
            ctx->pc = 0x203C80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_203c80;
        }
    }
    ctx->pc = 0x203DD8u;
label_203dd8:
    // 0x203dd8: 0x8fa501ec  lw          $a1, 0x1EC($sp)
    ctx->pc = 0x203dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x203ddc: 0x37de0008  ori         $fp, $fp, 0x8
    ctx->pc = 0x203ddcu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)8);
    // 0x203de0: 0x1000ffa2  b           . + 4 + (-0x5E << 2)
    ctx->pc = 0x203DE0u;
    {
        const bool branch_taken_0x203de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203DE0u;
        // 0x203de4: 0x90a40000  lbu         $a0, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203de0) {
            ctx->pc = 0x203C6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_203c6c;
        }
    }
    ctx->pc = 0x203DE8u;
label_203de8:
    // 0x203de8: 0x8fa601ec  lw          $a2, 0x1EC($sp)
    ctx->pc = 0x203de8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x203dec: 0x37de0040  ori         $fp, $fp, 0x40
    ctx->pc = 0x203decu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)64);
    // 0x203df0: 0x1000ff9e  b           . + 4 + (-0x62 << 2)
    ctx->pc = 0x203DF0u;
    {
        const bool branch_taken_0x203df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203DF0u;
        // 0x203df4: 0x90c40000  lbu         $a0, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203df0) {
            ctx->pc = 0x203C6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_203c6c;
        }
    }
    ctx->pc = 0x203DF8u;
label_203df8:
    // 0x203df8: 0x8fa201ec  lw          $v0, 0x1EC($sp)
    ctx->pc = 0x203df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x203dfc: 0x8fa501ec  lw          $a1, 0x1EC($sp)
    ctx->pc = 0x203dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x203e00: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x203e00u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x203e04: 0x2402006c  addiu       $v0, $zero, 0x6C
    ctx->pc = 0x203e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x203e08: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x203E08u;
    {
        const bool branch_taken_0x203e08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x203E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203E08u;
        // 0x203e0c: 0x90a40000  lbu         $a0, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203e08) {
            ctx->pc = 0x203E24u;
            goto label_203e24;
        }
    }
    ctx->pc = 0x203E10u;
    // 0x203e10: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x203e10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x203e14: 0x37de0020  ori         $fp, $fp, 0x20
    ctx->pc = 0x203e14u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)32);
    // 0x203e18: 0xafa501ec  sw          $a1, 0x1EC($sp)
    ctx->pc = 0x203e18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 5));
    // 0x203e1c: 0x1000ff93  b           . + 4 + (-0x6D << 2)
    ctx->pc = 0x203E1Cu;
    {
        const bool branch_taken_0x203e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203E1Cu;
        // 0x203e20: 0x90a40000  lbu         $a0, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203e1c) {
            ctx->pc = 0x203C6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_203c6c;
        }
    }
    ctx->pc = 0x203E24u;
label_203e24:
    // 0x203e24: 0x1000ff91  b           . + 4 + (-0x6F << 2)
    ctx->pc = 0x203E24u;
    {
        const bool branch_taken_0x203e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203E24u;
        // 0x203e28: 0x37de0010  ori         $fp, $fp, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x203e24) {
            ctx->pc = 0x203C6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_203c6c;
        }
    }
    ctx->pc = 0x203E2Cu;
label_203e2c:
    // 0x203e2c: 0x8fa601ec  lw          $a2, 0x1EC($sp)
    ctx->pc = 0x203e2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x203e30: 0x37de0020  ori         $fp, $fp, 0x20
    ctx->pc = 0x203e30u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)32);
    // 0x203e34: 0x1000ff8d  b           . + 4 + (-0x73 << 2)
    ctx->pc = 0x203E34u;
    {
        const bool branch_taken_0x203e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203E34u;
        // 0x203e38: 0x90c40000  lbu         $a0, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203e34) {
            ctx->pc = 0x203C6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_203c6c;
        }
    }
    ctx->pc = 0x203E3Cu;
label_203e3c:
    // 0x203e3c: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x203e3cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x203e40: 0x27b30060  addiu       $s3, $sp, 0x60
    ctx->pc = 0x203e40u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x203e44: 0x9282fff8  lbu         $v0, -0x8($s4)
    ctx->pc = 0x203e44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 4294967288)));
    // 0x203e48: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x203e48u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x203e4c: 0xa3a001d1  sb          $zero, 0x1D1($sp)
    ctx->pc = 0x203e4cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 0));
    // 0x203e50: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x203e50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x203e54: 0x10000149  b           . + 4 + (0x149 << 2)
    ctx->pc = 0x203E54u;
    {
        const bool branch_taken_0x203e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203E54u;
        // 0x203e58: 0xa3a20060  sb          $v0, 0x60($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203e54) {
            ctx->pc = 0x20437Cu;
            goto label_20437c;
        }
    }
    ctx->pc = 0x203E5Cu;
label_203e5c:
    // 0x203e5c: 0x37de0010  ori         $fp, $fp, 0x10
    ctx->pc = 0x203e5cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)16);
label_203e60:
    // 0x203e60: 0x33c20010  andi        $v0, $fp, 0x10
    ctx->pc = 0x203e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)16);
    // 0x203e64: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x203E64u;
    {
        const bool branch_taken_0x203e64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203E64u;
        // 0x203e68: 0x33c20040  andi        $v0, $fp, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x203e64) {
            ctx->pc = 0x203E78u;
            goto label_203e78;
        }
    }
    ctx->pc = 0x203E6Cu;
    // 0x203e6c: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x203e6cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x203e70: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x203E70u;
    {
        const bool branch_taken_0x203e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203E70u;
        // 0x203e74: 0xde90fff8  ld          $s0, -0x8($s4) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203e70) {
            ctx->pc = 0x203E8Cu;
            goto label_203e8c;
        }
    }
    ctx->pc = 0x203E78u;
label_203e78:
    // 0x203e78: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x203E78u;
    {
        const bool branch_taken_0x203e78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203E78u;
        // 0x203e7c: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203e78) {
            ctx->pc = 0x203E88u;
            goto label_203e88;
        }
    }
    ctx->pc = 0x203E80u;
    // 0x203e80: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x203E80u;
    {
        const bool branch_taken_0x203e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203E80u;
        // 0x203e84: 0x8690fff8  lh          $s0, -0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203e80) {
            ctx->pc = 0x203E8Cu;
            goto label_203e8c;
        }
    }
    ctx->pc = 0x203E88u;
label_203e88:
    // 0x203e88: 0x8e90fff8  lw          $s0, -0x8($s4)
    ctx->pc = 0x203e88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
label_203e8c:
    // 0x203e8c: 0x60100db  bgez        $s0, . + 4 + (0xDB << 2)
    ctx->pc = 0x203E8Cu;
    {
        const bool branch_taken_0x203e8c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x203E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203E8Cu;
        // 0x203e90: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203e8c) {
            ctx->pc = 0x2041FCu;
            goto label_2041fc;
        }
    }
    ctx->pc = 0x203E94u;
    // 0x203e94: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x203e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x203e98: 0x10802f  dsubu       $s0, $zero, $s0
    ctx->pc = 0x203e98u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) - GPR_U64(ctx, 16));
    // 0x203e9c: 0x100000d7  b           . + 4 + (0xD7 << 2)
    ctx->pc = 0x203E9Cu;
    {
        const bool branch_taken_0x203e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203E9Cu;
        // 0x203ea0: 0xa3a201d1  sb          $v0, 0x1D1($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203e9c) {
            ctx->pc = 0x2041FCu;
            goto label_2041fc;
        }
    }
    ctx->pc = 0x203EA4u;
label_203ea4:
    // 0x203ea4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x203ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x203ea8: 0x16420003  bne         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x203EA8u;
    {
        const bool branch_taken_0x203ea8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x203EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203EA8u;
        // 0x203eac: 0x24020067  addiu       $v0, $zero, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203ea8) {
            ctx->pc = 0x203EB8u;
            goto label_203eb8;
        }
    }
    ctx->pc = 0x203EB0u;
    // 0x203eb0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x203EB0u;
    {
        const bool branch_taken_0x203eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203EB0u;
        // 0x203eb4: 0x24120006  addiu       $s2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203eb0) {
            ctx->pc = 0x203ED0u;
            goto label_203ed0;
        }
    }
    ctx->pc = 0x203EB8u;
label_203eb8:
    // 0x203eb8: 0x12e20003  beq         $s7, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x203EB8u;
    {
        const bool branch_taken_0x203eb8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        ctx->pc = 0x203EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203EB8u;
        // 0x203ebc: 0x24020047  addiu       $v0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203eb8) {
            ctx->pc = 0x203EC8u;
            goto label_203ec8;
        }
    }
    ctx->pc = 0x203EC0u;
    // 0x203ec0: 0x16e20004  bne         $s7, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x203EC0u;
    {
        const bool branch_taken_0x203ec0 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x203EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203EC0u;
        // 0x203ec4: 0x33c20008  andi        $v0, $fp, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x203ec0) {
            ctx->pc = 0x203ED4u;
            goto label_203ed4;
        }
    }
    ctx->pc = 0x203EC8u;
label_203ec8:
    // 0x203ec8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x203ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x203ecc: 0x52900a  movz        $s2, $v0, $s2
    ctx->pc = 0x203eccu;
    if (GPR_U64(ctx, 18) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
label_203ed0:
    // 0x203ed0: 0x33c20008  andi        $v0, $fp, 0x8
    ctx->pc = 0x203ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)8);
label_203ed4:
    // 0x203ed4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x203ED4u;
    {
        const bool branch_taken_0x203ed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203ED4u;
        // 0x203ed8: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203ed4) {
            ctx->pc = 0x203EE8u;
            goto label_203ee8;
        }
    }
    ctx->pc = 0x203EDCu;
    // 0x203edc: 0xde82fff8  ld          $v0, -0x8($s4)
    ctx->pc = 0x203edcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 4294967288)));
    // 0x203ee0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x203EE0u;
    {
        const bool branch_taken_0x203ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203EE0u;
        // 0x203ee4: 0xffa20200  sd          $v0, 0x200($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203ee0) {
            ctx->pc = 0x203EF0u;
            goto label_203ef0;
        }
    }
    ctx->pc = 0x203EE8u;
label_203ee8:
    // 0x203ee8: 0xde83fff8  ld          $v1, -0x8($s4)
    ctx->pc = 0x203ee8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 4294967288)));
    // 0x203eec: 0xffa30200  sd          $v1, 0x200($sp)
    ctx->pc = 0x203eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 3));
label_203ef0:
    // 0x203ef0: 0xc07ece4  jal         func_1FB390
    ctx->pc = 0x203EF0u;
    SET_GPR_U32(ctx, 31, 0x203EF8u);
    ctx->pc = 0x203EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203EF0u;
    // 0x203ef4: 0xdfa40200  ld          $a0, 0x200($sp) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB390u, 0x203EF0u, 0x203EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203EF8u;
label_203ef8:
    // 0x203ef8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x203EF8u;
    {
        const bool branch_taken_0x203ef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203EF8u;
        // 0x203efc: 0xdfa40200  ld          $a0, 0x200($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 512)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203ef8) {
            ctx->pc = 0x203F28u;
            goto label_203f28;
        }
    }
    ctx->pc = 0x203F00u;
    // 0x203f00: 0xc082178  jal         func_2085E0
    ctx->pc = 0x203F00u;
    SET_GPR_U32(ctx, 31, 0x203F08u);
    ctx->pc = 0x203F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203F00u;
    // 0x203f04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E0u, 0x203F00u, 0x203F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203F08u;
label_203f08:
    // 0x203f08: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x203F08u;
    {
        const bool branch_taken_0x203f08 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x203F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203F08u;
        // 0x203f0c: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203f08) {
            ctx->pc = 0x203F1Cu;
            goto label_203f1c;
        }
    }
    ctx->pc = 0x203F10u;
    // 0x203f10: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x203f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x203f14: 0xa3a201d1  sb          $v0, 0x1D1($sp)
    ctx->pc = 0x203f14u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 2));
    // 0x203f18: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x203f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_203f1c:
    // 0x203f1c: 0x24150003  addiu       $s5, $zero, 0x3
    ctx->pc = 0x203f1cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x203f20: 0x10000115  b           . + 4 + (0x115 << 2)
    ctx->pc = 0x203F20u;
    {
        const bool branch_taken_0x203f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203F20u;
        // 0x203f24: 0x245351a0  addiu       $s3, $v0, 0x51A0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 20896));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203f20) {
            ctx->pc = 0x204378u;
            goto label_204378;
        }
    }
    ctx->pc = 0x203F28u;
label_203f28:
    // 0x203f28: 0xc07ecf6  jal         func_1FB3D8
    ctx->pc = 0x203F28u;
    SET_GPR_U32(ctx, 31, 0x203F30u);
    ctx->pc = 0x203F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203F28u;
    // 0x203f2c: 0xdfa40200  ld          $a0, 0x200($sp) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB3D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB3D8u, 0x203F28u, 0x203F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203F30u;
label_203f30:
    // 0x203f30: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x203F30u;
    {
        const bool branch_taken_0x203f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203F30u;
        // 0x203f34: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203f30) {
            ctx->pc = 0x203F44u;
            goto label_203f44;
        }
    }
    ctx->pc = 0x203F38u;
    // 0x203f38: 0x24150003  addiu       $s5, $zero, 0x3
    ctx->pc = 0x203f38u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x203f3c: 0x1000010e  b           . + 4 + (0x10E << 2)
    ctx->pc = 0x203F3Cu;
    {
        const bool branch_taken_0x203f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203F3Cu;
        // 0x203f40: 0x245351a8  addiu       $s3, $v0, 0x51A8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 20904));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203f3c) {
            ctx->pc = 0x204378u;
            goto label_204378;
        }
    }
    ctx->pc = 0x203F44u;
label_203f44:
    // 0x203f44: 0x37de0100  ori         $fp, $fp, 0x100
    ctx->pc = 0x203f44u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)256);
    // 0x203f48: 0x8fa401e4  lw          $a0, 0x1E4($sp)
    ctx->pc = 0x203f48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
    // 0x203f4c: 0xdfa50200  ld          $a1, 0x200($sp)
    ctx->pc = 0x203f4cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x203f50: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x203f50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203f54: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x203f54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203f58: 0x27a801d0  addiu       $t0, $sp, 0x1D0
    ctx->pc = 0x203f58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x203f5c: 0x27a901dc  addiu       $t1, $sp, 0x1DC
    ctx->pc = 0x203f5cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 476));
    // 0x203f60: 0x2e0502d  daddu       $t2, $s7, $zero
    ctx->pc = 0x203f60u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203f64: 0xc0813f0  jal         func_204FC0
    ctx->pc = 0x203F64u;
    SET_GPR_U32(ctx, 31, 0x203F6Cu);
    ctx->pc = 0x203F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203F64u;
    // 0x203f68: 0x27ab01e0  addiu       $t3, $sp, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204FC0u, 0x203F64u, 0x203F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203F6Cu;
label_203f6c:
    // 0x203f6c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x203f6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203f70: 0x24020067  addiu       $v0, $zero, 0x67
    ctx->pc = 0x203f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
    // 0x203f74: 0x12e20003  beq         $s7, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x203F74u;
    {
        const bool branch_taken_0x203f74 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        ctx->pc = 0x203F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203F74u;
        // 0x203f78: 0x24020047  addiu       $v0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203f74) {
            ctx->pc = 0x203F84u;
            goto label_203f84;
        }
    }
    ctx->pc = 0x203F7Cu;
    // 0x203f7c: 0x16e2000c  bne         $s7, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x203F7Cu;
    {
        const bool branch_taken_0x203f7c = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x203F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203F7Cu;
        // 0x203f80: 0x8fa501dc  lw          $a1, 0x1DC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203f7c) {
            ctx->pc = 0x203FB0u;
            goto label_203fb0;
        }
    }
    ctx->pc = 0x203F84u;
label_203f84:
    // 0x203f84: 0x8fa501dc  lw          $a1, 0x1DC($sp)
    ctx->pc = 0x203f84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x203f88: 0x28a2fffd  slti        $v0, $a1, -0x3
    ctx->pc = 0x203f88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294967293) ? 1 : 0);
    // 0x203f8c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x203F8Cu;
    {
        const bool branch_taken_0x203f8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x203F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203F8Cu;
        // 0x203f90: 0x3ae40067  xori        $a0, $s7, 0x67 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 23) ^ (uint64_t)(uint16_t)103);
        ctx->in_delay_slot = false;
        if (branch_taken_0x203f8c) {
            ctx->pc = 0x203FA0u;
            goto label_203fa0;
        }
    }
    ctx->pc = 0x203F94u;
    // 0x203f94: 0x245102a  slt         $v0, $s2, $a1
    ctx->pc = 0x203f94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x203f98: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x203F98u;
    {
        const bool branch_taken_0x203f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x203f98) {
            ctx->pc = 0x203F9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203F98u;
            // 0x203f9c: 0x24170067  addiu       $s7, $zero, 0x67 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
            ctx->in_delay_slot = false;
            ctx->pc = 0x203FB0u;
            goto label_203fb0;
        }
    }
    ctx->pc = 0x203FA0u;
label_203fa0:
    // 0x203fa0: 0x24020065  addiu       $v0, $zero, 0x65
    ctx->pc = 0x203fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x203fa4: 0x24030045  addiu       $v1, $zero, 0x45
    ctx->pc = 0x203fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x203fa8: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x203fa8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203fac: 0x64b80b  movn        $s7, $v1, $a0
    ctx->pc = 0x203facu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 3));
label_203fb0:
    // 0x203fb0: 0x2ae20066  slti        $v0, $s7, 0x66
    ctx->pc = 0x203fb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)102) ? 1 : 0);
    // 0x203fb4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x203FB4u;
    {
        const bool branch_taken_0x203fb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203FB4u;
        // 0x203fb8: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203fb4) {
            ctx->pc = 0x203FFCu;
            goto label_203ffc;
        }
    }
    ctx->pc = 0x203FBCu;
    // 0x203fbc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x203fbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203fc0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x203fc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203fc4: 0xafa201dc  sw          $v0, 0x1DC($sp)
    ctx->pc = 0x203fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 476), GPR_U32(ctx, 2));
    // 0x203fc8: 0xc08145c  jal         func_205170
    ctx->pc = 0x203FC8u;
    SET_GPR_U32(ctx, 31, 0x203FD0u);
    ctx->pc = 0x203FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203FC8u;
    // 0x203fcc: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205170u, 0x203FC8u, 0x203FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203FD0u;
label_203fd0:
    // 0x203fd0: 0xafa20208  sw          $v0, 0x208($sp)
    ctx->pc = 0x203fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 2));
    // 0x203fd4: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x203fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x203fd8: 0x8fa40208  lw          $a0, 0x208($sp)
    ctx->pc = 0x203fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x203fdc: 0x28430002  slti        $v1, $v0, 0x2
    ctx->pc = 0x203fdcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x203fe0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x203FE0u;
    {
        const bool branch_taken_0x203fe0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x203FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203FE0u;
        // 0x203fe4: 0x82a821  addu        $s5, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203fe0) {
            ctx->pc = 0x203FF4u;
            goto label_203ff4;
        }
    }
    ctx->pc = 0x203FE8u;
    // 0x203fe8: 0x33c20001  andi        $v0, $fp, 0x1
    ctx->pc = 0x203fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
    // 0x203fec: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x203FECu;
    {
        const bool branch_taken_0x203fec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203FECu;
        // 0x203ff0: 0x83a201d0  lb          $v0, 0x1D0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203fec) {
            ctx->pc = 0x204058u;
            goto label_204058;
        }
    }
    ctx->pc = 0x203FF4u;
label_203ff4:
    // 0x203ff4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x203FF4u;
    {
        const bool branch_taken_0x203ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203FF4u;
        // 0x203ff8: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203ff4) {
            ctx->pc = 0x204054u;
            goto label_204054;
        }
    }
    ctx->pc = 0x203FFCu;
label_203ffc:
    // 0x203ffc: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x203ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x204000: 0x16e2000b  bne         $s7, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x204000u;
    {
        const bool branch_taken_0x204000 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x204004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204000u;
        // 0x204004: 0x8fa301e0  lw          $v1, 0x1E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204000) {
            ctx->pc = 0x204030u;
            goto label_204030;
        }
    }
    ctx->pc = 0x204008u;
    // 0x204008: 0x18a00012  blez        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x204008u;
    {
        const bool branch_taken_0x204008 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x20400Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204008u;
        // 0x20400c: 0x26550002  addiu       $s5, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204008) {
            ctx->pc = 0x204054u;
            goto label_204054;
        }
    }
    ctx->pc = 0x204010u;
    // 0x204010: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x204010u;
    {
        const bool branch_taken_0x204010 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x204014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204010u;
        // 0x204014: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204010) {
            ctx->pc = 0x204024u;
            goto label_204024;
        }
    }
    ctx->pc = 0x204018u;
    // 0x204018: 0x33c20001  andi        $v0, $fp, 0x1
    ctx->pc = 0x204018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
    // 0x20401c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x20401Cu;
    {
        const bool branch_taken_0x20401c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x204020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20401Cu;
        // 0x204020: 0x83a201d0  lb          $v0, 0x1D0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20401c) {
            ctx->pc = 0x204058u;
            goto label_204058;
        }
    }
    ctx->pc = 0x204024u;
label_204024:
    // 0x204024: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x204024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x204028: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x204028u;
    {
        const bool branch_taken_0x204028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20402Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204028u;
        // 0x20402c: 0x52a821  addu        $s5, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204028) {
            ctx->pc = 0x204054u;
            goto label_204054;
        }
    }
    ctx->pc = 0x204030u;
label_204030:
    // 0x204030: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x204030u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x204034: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x204034u;
    {
        const bool branch_taken_0x204034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x204038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204034u;
        // 0x204038: 0x33c20001  andi        $v0, $fp, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x204034) {
            ctx->pc = 0x204044u;
            goto label_204044;
        }
    }
    ctx->pc = 0x20403Cu;
    // 0x20403c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x20403Cu;
    {
        const bool branch_taken_0x20403c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20403Cu;
        // 0x204040: 0xa2a821  addu        $s5, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20403c) {
            ctx->pc = 0x204054u;
            goto label_204054;
        }
    }
    ctx->pc = 0x204044u;
label_204044:
    // 0x204044: 0x1ca00003  bgtz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x204044u;
    {
        const bool branch_taken_0x204044 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x204048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204044u;
        // 0x204048: 0x24750001  addiu       $s5, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204044) {
            ctx->pc = 0x204054u;
            goto label_204054;
        }
    }
    ctx->pc = 0x20404Cu;
    // 0x20404c: 0x24620002  addiu       $v0, $v1, 0x2
    ctx->pc = 0x20404cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x204050: 0x45a823  subu        $s5, $v0, $a1
    ctx->pc = 0x204050u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_204054:
    // 0x204054: 0x83a201d0  lb          $v0, 0x1D0($sp)
    ctx->pc = 0x204054u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 464)));
label_204058:
    // 0x204058: 0x104000c7  beqz        $v0, . + 4 + (0xC7 << 2)
    ctx->pc = 0x204058u;
    {
        const bool branch_taken_0x204058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20405Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204058u;
        // 0x20405c: 0x2402002d  addiu       $v0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204058) {
            ctx->pc = 0x204378u;
            goto label_204378;
        }
    }
    ctx->pc = 0x204060u;
    // 0x204060: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x204060u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x204064: 0x100000c5  b           . + 4 + (0xC5 << 2)
    ctx->pc = 0x204064u;
    {
        const bool branch_taken_0x204064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204064u;
        // 0x204068: 0xa3a201d1  sb          $v0, 0x1D1($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204064) {
            ctx->pc = 0x20437Cu;
            goto label_20437c;
        }
    }
    ctx->pc = 0x20406Cu;
label_20406c:
    // 0x20406c: 0x33c20010  andi        $v0, $fp, 0x10
    ctx->pc = 0x20406cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)16);
    // 0x204070: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x204070u;
    {
        const bool branch_taken_0x204070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x204074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204070u;
        // 0x204074: 0x8fa501f0  lw          $a1, 0x1F0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204070) {
            ctx->pc = 0x204088u;
            goto label_204088;
        }
    }
    ctx->pc = 0x204078u;
    // 0x204078: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x204078u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x20407c: 0x8e82fff8  lw          $v0, -0x8($s4)
    ctx->pc = 0x20407cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
    // 0x204080: 0x1000fec1  b           . + 4 + (-0x13F << 2)
    ctx->pc = 0x204080u;
    {
        const bool branch_taken_0x204080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204080u;
        // 0x204084: 0xfc450000  sd          $a1, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204080) {
            ctx->pc = 0x203B88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_203b88;
        }
    }
    ctx->pc = 0x204088u;
label_204088:
    // 0x204088: 0x33c20040  andi        $v0, $fp, 0x40
    ctx->pc = 0x204088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)64);
    // 0x20408c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20408Cu;
    {
        const bool branch_taken_0x20408c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x204090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20408Cu;
        // 0x204090: 0x8fa601f0  lw          $a2, 0x1F0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20408c) {
            ctx->pc = 0x2040A4u;
            goto label_2040a4;
        }
    }
    ctx->pc = 0x204094u;
    // 0x204094: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x204094u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x204098: 0x8e82fff8  lw          $v0, -0x8($s4)
    ctx->pc = 0x204098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
    // 0x20409c: 0x1000feba  b           . + 4 + (-0x146 << 2)
    ctx->pc = 0x20409Cu;
    {
        const bool branch_taken_0x20409c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2040A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20409Cu;
        // 0x2040a0: 0xa4460000  sh          $a2, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20409c) {
            ctx->pc = 0x203B88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_203b88;
        }
    }
    ctx->pc = 0x2040A4u;
label_2040a4:
    // 0x2040a4: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x2040a4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x2040a8: 0x8fa301f0  lw          $v1, 0x1F0($sp)
    ctx->pc = 0x2040a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x2040ac: 0x8e82fff8  lw          $v0, -0x8($s4)
    ctx->pc = 0x2040acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
    // 0x2040b0: 0x1000feb5  b           . + 4 + (-0x14B << 2)
    ctx->pc = 0x2040B0u;
    {
        const bool branch_taken_0x2040b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2040B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2040B0u;
        // 0x2040b4: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2040b0) {
            ctx->pc = 0x203B88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_203b88;
        }
    }
    ctx->pc = 0x2040B8u;
label_2040b8:
    // 0x2040b8: 0x37de0010  ori         $fp, $fp, 0x10
    ctx->pc = 0x2040b8u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)16);
label_2040bc:
    // 0x2040bc: 0x33c20010  andi        $v0, $fp, 0x10
    ctx->pc = 0x2040bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)16);
    // 0x2040c0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2040C0u;
    {
        const bool branch_taken_0x2040c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2040C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2040C0u;
        // 0x2040c4: 0x33c20040  andi        $v0, $fp, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2040c0) {
            ctx->pc = 0x2040D4u;
            goto label_2040d4;
        }
    }
    ctx->pc = 0x2040C8u;
    // 0x2040c8: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x2040c8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x2040cc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2040CCu;
    {
        const bool branch_taken_0x2040cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2040D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2040CCu;
        // 0x2040d0: 0xde90fff8  ld          $s0, -0x8($s4) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2040cc) {
            ctx->pc = 0x2040E8u;
            goto label_2040e8;
        }
    }
    ctx->pc = 0x2040D4u;
label_2040d4:
    // 0x2040d4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2040D4u;
    {
        const bool branch_taken_0x2040d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2040D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2040D4u;
        // 0x2040d8: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2040d4) {
            ctx->pc = 0x2040E4u;
            goto label_2040e4;
        }
    }
    ctx->pc = 0x2040DCu;
    // 0x2040dc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2040DCu;
    {
        const bool branch_taken_0x2040dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2040E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2040DCu;
        // 0x2040e0: 0x9690fff8  lhu         $s0, -0x8($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2040dc) {
            ctx->pc = 0x2040E8u;
            goto label_2040e8;
        }
    }
    ctx->pc = 0x2040E4u;
label_2040e4:
    // 0x2040e4: 0x9e90fff8  lwu         $s0, -0x8($s4)
    ctx->pc = 0x2040e4u;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
label_2040e8:
    // 0x2040e8: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x2040E8u;
    {
        const bool branch_taken_0x2040e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2040ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2040E8u;
        // 0x2040ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2040e8) {
            ctx->pc = 0x2041F8u;
            goto label_2041f8;
        }
    }
    ctx->pc = 0x2040F0u;
label_2040f0:
    // 0x2040f0: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x2040f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x2040f4: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x2040f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x2040f8: 0x244251b0  addiu       $v0, $v0, 0x51B0
    ctx->pc = 0x2040f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20912));
    // 0x2040fc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2040fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x204100: 0xafa20214  sw          $v0, 0x214($sp)
    ctx->pc = 0x204100u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 2));
    // 0x204104: 0x37de0002  ori         $fp, $fp, 0x2
    ctx->pc = 0x204104u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)2);
    // 0x204108: 0x24170078  addiu       $s7, $zero, 0x78
    ctx->pc = 0x204108u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x20410c: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x20410Cu;
    {
        const bool branch_taken_0x20410c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20410Cu;
        // 0x204110: 0x8e90fff8  lw          $s0, -0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20410c) {
            ctx->pc = 0x2041F8u;
            goto label_2041f8;
        }
    }
    ctx->pc = 0x204114u;
label_204114:
    // 0x204114: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x204114u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x204118: 0x8e93fff8  lw          $s3, -0x8($s4)
    ctx->pc = 0x204118u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
    // 0x20411c: 0x16600002  bnez        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x20411Cu;
    {
        const bool branch_taken_0x20411c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x204120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20411Cu;
        // 0x204120: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20411c) {
            ctx->pc = 0x204128u;
            goto label_204128;
        }
    }
    ctx->pc = 0x204124u;
    // 0x204124: 0x245351c8  addiu       $s3, $v0, 0x51C8
    ctx->pc = 0x204124u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 20936));
label_204128:
    // 0x204128: 0x640000b  bltz        $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x204128u;
    {
        const bool branch_taken_0x204128 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x20412Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204128u;
        // 0x20412c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204128) {
            ctx->pc = 0x204158u;
            goto label_204158;
        }
    }
    ctx->pc = 0x204130u;
    // 0x204130: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x204130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204134: 0xc07fda0  jal         func_1FF680
    ctx->pc = 0x204134u;
    SET_GPR_U32(ctx, 31, 0x20413Cu);
    ctx->pc = 0x204138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204134u;
    // 0x204138: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF680u, 0x204134u, 0x20413Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20413Cu;
label_20413c:
    // 0x20413c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20413Cu;
    {
        const bool branch_taken_0x20413c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x204140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20413Cu;
        // 0x204140: 0x53a823  subu        $s5, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20413c) {
            ctx->pc = 0x204150u;
            goto label_204150;
        }
    }
    ctx->pc = 0x204144u;
    // 0x204144: 0x255102a  slt         $v0, $s2, $s5
    ctx->pc = 0x204144u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x204148: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x204148u;
    {
        const bool branch_taken_0x204148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20414Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204148u;
        // 0x20414c: 0x242a80b  movn        $s5, $s2, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204148) {
            ctx->pc = 0x204374u;
            goto label_204374;
        }
    }
    ctx->pc = 0x204150u;
label_204150:
    // 0x204150: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x204150u;
    {
        const bool branch_taken_0x204150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204150u;
        // 0x204154: 0x240a82d  daddu       $s5, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204150) {
            ctx->pc = 0x204374u;
            goto label_204374;
        }
    }
    ctx->pc = 0x204158u;
label_204158:
    // 0x204158: 0xc080748  jal         func_201D20
    ctx->pc = 0x204158u;
    SET_GPR_U32(ctx, 31, 0x204160u);
    ctx->pc = 0x20415Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204158u;
    // 0x20415c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D20u, 0x204158u, 0x204160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204160u;
label_204160:
    // 0x204160: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x204160u;
    {
        const bool branch_taken_0x204160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204160u;
        // 0x204164: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204160) {
            ctx->pc = 0x204374u;
            goto label_204374;
        }
    }
    ctx->pc = 0x204168u;
label_204168:
    // 0x204168: 0x37de0010  ori         $fp, $fp, 0x10
    ctx->pc = 0x204168u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)16);
label_20416c:
    // 0x20416c: 0x33c20010  andi        $v0, $fp, 0x10
    ctx->pc = 0x20416cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)16);
    // 0x204170: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x204170u;
    {
        const bool branch_taken_0x204170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x204174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204170u;
        // 0x204174: 0x33c20040  andi        $v0, $fp, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x204170) {
            ctx->pc = 0x204184u;
            goto label_204184;
        }
    }
    ctx->pc = 0x204178u;
    // 0x204178: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x204178u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x20417c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x20417Cu;
    {
        const bool branch_taken_0x20417c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20417Cu;
        // 0x204180: 0xde90fff8  ld          $s0, -0x8($s4) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20417c) {
            ctx->pc = 0x204198u;
            goto label_204198;
        }
    }
    ctx->pc = 0x204184u;
label_204184:
    // 0x204184: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x204184u;
    {
        const bool branch_taken_0x204184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x204188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204184u;
        // 0x204188: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204184) {
            ctx->pc = 0x204194u;
            goto label_204194;
        }
    }
    ctx->pc = 0x20418Cu;
    // 0x20418c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20418Cu;
    {
        const bool branch_taken_0x20418c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20418Cu;
        // 0x204190: 0x9690fff8  lhu         $s0, -0x8($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20418c) {
            ctx->pc = 0x204198u;
            goto label_204198;
        }
    }
    ctx->pc = 0x204194u;
label_204194:
    // 0x204194: 0x9e90fff8  lwu         $s0, -0x8($s4)
    ctx->pc = 0x204194u;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
label_204198:
    // 0x204198: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x204198u;
    {
        const bool branch_taken_0x204198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20419Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204198u;
        // 0x20419c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204198) {
            ctx->pc = 0x2041F8u;
            goto label_2041f8;
        }
    }
    ctx->pc = 0x2041A0u;
label_2041a0:
    // 0x2041a0: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x2041a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x2041a4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2041A4u;
    {
        const bool branch_taken_0x2041a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2041A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2041A4u;
        // 0x2041a8: 0x244251d0  addiu       $v0, $v0, 0x51D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20944));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2041a4) {
            ctx->pc = 0x2041B4u;
            goto label_2041b4;
        }
    }
    ctx->pc = 0x2041ACu;
label_2041ac:
    // 0x2041ac: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x2041acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x2041b0: 0x244251b0  addiu       $v0, $v0, 0x51B0
    ctx->pc = 0x2041b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20912));
label_2041b4:
    // 0x2041b4: 0xafa20214  sw          $v0, 0x214($sp)
    ctx->pc = 0x2041b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 2));
    // 0x2041b8: 0x33c20010  andi        $v0, $fp, 0x10
    ctx->pc = 0x2041b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)16);
    // 0x2041bc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2041BCu;
    {
        const bool branch_taken_0x2041bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2041C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2041BCu;
        // 0x2041c0: 0x33c20040  andi        $v0, $fp, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2041bc) {
            ctx->pc = 0x2041D0u;
            goto label_2041d0;
        }
    }
    ctx->pc = 0x2041C4u;
    // 0x2041c4: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x2041c4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x2041c8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2041C8u;
    {
        const bool branch_taken_0x2041c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2041CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2041C8u;
        // 0x2041cc: 0xde90fff8  ld          $s0, -0x8($s4) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2041c8) {
            ctx->pc = 0x2041E4u;
            goto label_2041e4;
        }
    }
    ctx->pc = 0x2041D0u;
label_2041d0:
    // 0x2041d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2041D0u;
    {
        const bool branch_taken_0x2041d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2041D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2041D0u;
        // 0x2041d4: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2041d0) {
            ctx->pc = 0x2041E0u;
            goto label_2041e0;
        }
    }
    ctx->pc = 0x2041D8u;
    // 0x2041d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2041D8u;
    {
        const bool branch_taken_0x2041d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2041DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2041D8u;
        // 0x2041dc: 0x9690fff8  lhu         $s0, -0x8($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2041d8) {
            ctx->pc = 0x2041E4u;
            goto label_2041e4;
        }
    }
    ctx->pc = 0x2041E0u;
label_2041e0:
    // 0x2041e0: 0x9e90fff8  lwu         $s0, -0x8($s4)
    ctx->pc = 0x2041e0u;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
label_2041e4:
    // 0x2041e4: 0x33c30001  andi        $v1, $fp, 0x1
    ctx->pc = 0x2041e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
    // 0x2041e8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2041E8u;
    {
        const bool branch_taken_0x2041e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2041ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2041E8u;
        // 0x2041ec: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2041e8) {
            ctx->pc = 0x2041F8u;
            goto label_2041f8;
        }
    }
    ctx->pc = 0x2041F0u;
    // 0x2041f0: 0x37c20002  ori         $v0, $fp, 0x2
    ctx->pc = 0x2041f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)2);
    // 0x2041f4: 0x50f00b  movn        $fp, $v0, $s0
    ctx->pc = 0x2041f4u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 2));
label_2041f8:
    // 0x2041f8: 0xa3a001d1  sb          $zero, 0x1D1($sp)
    ctx->pc = 0x2041f8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 0));
label_2041fc:
    // 0x2041fc: 0x6400003  bltz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2041FCu;
    {
        const bool branch_taken_0x2041fc = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x204200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2041FCu;
        // 0x204200: 0xafb2020c  sw          $s2, 0x20C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2041fc) {
            ctx->pc = 0x20420Cu;
            goto label_20420c;
        }
    }
    ctx->pc = 0x204204u;
    // 0x204204: 0x2402ff7f  addiu       $v0, $zero, -0x81
    ctx->pc = 0x204204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x204208: 0x3c2f024  and         $fp, $fp, $v0
    ctx->pc = 0x204208u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) & GPR_U64(ctx, 2));
label_20420c:
    // 0x20420c: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20420Cu;
    {
        const bool branch_taken_0x20420c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x204210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20420Cu;
        // 0x204210: 0x27b301bc  addiu       $s3, $sp, 0x1BC (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 444));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20420c) {
            ctx->pc = 0x204220u;
            goto label_204220;
        }
    }
    ctx->pc = 0x204214u;
    // 0x204214: 0x8fa5020c  lw          $a1, 0x20C($sp)
    ctx->pc = 0x204214u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
    // 0x204218: 0x10a0004d  beqz        $a1, . + 4 + (0x4D << 2)
    ctx->pc = 0x204218u;
    {
        const bool branch_taken_0x204218 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x20421Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204218u;
        // 0x20421c: 0x26320008  addiu       $s2, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204218) {
            ctx->pc = 0x204350u;
            goto label_204350;
        }
    }
    ctx->pc = 0x204220u;
label_204220:
    // 0x204220: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x204220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204224: 0x1082001f  beq         $a0, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x204224u;
    {
        const bool branch_taken_0x204224 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x204228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204224u;
        // 0x204228: 0x2e02000a  sltiu       $v0, $s0, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x204224) {
            ctx->pc = 0x2042A4u;
            goto label_2042a4;
        }
    }
    ctx->pc = 0x20422Cu;
    // 0x20422c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x20422Cu;
    {
        const bool branch_taken_0x20422c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x204230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20422Cu;
        // 0x204230: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20422c) {
            ctx->pc = 0x204258u;
            goto label_204258;
        }
    }
    ctx->pc = 0x204234u;
    // 0x204234: 0x10820037  beq         $a0, $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x204234u;
    {
        const bool branch_taken_0x204234 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x204238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204234u;
        // 0x204238: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204234) {
            ctx->pc = 0x204314u;
            goto label_204314;
        }
    }
    ctx->pc = 0x20423Cu;
    // 0x20423c: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x20423cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x204240: 0x245351e8  addiu       $s3, $v0, 0x51E8
    ctx->pc = 0x204240u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 20968));
    // 0x204244: 0x33d60084  andi        $s6, $fp, 0x84
    ctx->pc = 0x204244u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)132);
    // 0x204248: 0xc080748  jal         func_201D20
    ctx->pc = 0x204248u;
    SET_GPR_U32(ctx, 31, 0x204250u);
    ctx->pc = 0x20424Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204248u;
    // 0x20424c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D20u, 0x204248u, 0x204250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204250u;
label_204250:
    // 0x204250: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x204250u;
    {
        const bool branch_taken_0x204250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204250u;
        // 0x204254: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204250) {
            ctx->pc = 0x204380u;
            goto label_204380;
        }
    }
    ctx->pc = 0x204258u;
label_204258:
    // 0x204258: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x204258u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x20425c: 0x27b50060  addiu       $s5, $sp, 0x60
    ctx->pc = 0x20425cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x204260: 0x33c30001  andi        $v1, $fp, 0x1
    ctx->pc = 0x204260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
    // 0x204264: 0x33d60084  andi        $s6, $fp, 0x84
    ctx->pc = 0x204264u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)132);
label_204268:
    // 0x204268: 0x32020007  andi        $v0, $s0, 0x7
    ctx->pc = 0x204268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)7);
    // 0x20426c: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x20426cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x204270: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x204270u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
    // 0x204274: 0x1080fa  dsrl        $s0, $s0, 3
    ctx->pc = 0x204274u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 3);
    // 0x204278: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x204278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20427c: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x20427cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x204280: 0x1600fff9  bnez        $s0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x204280u;
    {
        const bool branch_taken_0x204280 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x204280) {
            ctx->pc = 0x204268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_204268;
        }
    }
    ctx->pc = 0x204288u;
    // 0x204288: 0x10600033  beqz        $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x204288u;
    {
        const bool branch_taken_0x204288 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20428Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204288u;
        // 0x20428c: 0x24030030  addiu       $v1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204288) {
            ctx->pc = 0x204358u;
            goto label_204358;
        }
    }
    ctx->pc = 0x204290u;
    // 0x204290: 0x10430032  beq         $v0, $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x204290u;
    {
        const bool branch_taken_0x204290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x204294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204290u;
        // 0x204294: 0x2662fea4  addiu       $v0, $s3, -0x15C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966948));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204290) {
            ctx->pc = 0x20435Cu;
            goto label_20435c;
        }
    }
    ctx->pc = 0x204298u;
    // 0x204298: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x204298u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x20429c: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x20429Cu;
    {
        const bool branch_taken_0x20429c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2042A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20429Cu;
        // 0x2042a0: 0xa2630000  sb          $v1, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20429c) {
            ctx->pc = 0x204358u;
            goto label_204358;
        }
    }
    ctx->pc = 0x2042A4u;
label_2042a4:
    // 0x2042a4: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2042A4u;
    {
        const bool branch_taken_0x2042a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2042A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2042A4u;
        // 0x2042a8: 0x26320008  addiu       $s2, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2042a4) {
            ctx->pc = 0x2042F8u;
            goto label_2042f8;
        }
    }
    ctx->pc = 0x2042ACu;
    // 0x2042ac: 0x27b50060  addiu       $s5, $sp, 0x60
    ctx->pc = 0x2042acu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2042b0: 0x33d60084  andi        $s6, $fp, 0x84
    ctx->pc = 0x2042b0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)132);
    // 0x2042b4: 0x0  nop
    ctx->pc = 0x2042b4u;
    // NOP
label_2042b8:
    // 0x2042b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2042b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2042bc: 0xc081daa  jal         func_2076A8
    ctx->pc = 0x2042BCu;
    SET_GPR_U32(ctx, 31, 0x2042C4u);
    ctx->pc = 0x2042C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2042BCu;
    // 0x2042c0: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2076A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2076A8u, 0x2042BCu, 0x2042C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2042C4u;
label_2042c4:
    // 0x2042c4: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x2042c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x2042c8: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x2042c8u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
    // 0x2042cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2042ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2042d0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2042d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2042d4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2042d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2042d8: 0xc081c38  jal         func_2070E0
    ctx->pc = 0x2042D8u;
    SET_GPR_U32(ctx, 31, 0x2042E0u);
    ctx->pc = 0x2042DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2042D8u;
    // 0x2042dc: 0xa2620000  sb          $v0, 0x0($s3) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2070E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2070E0u, 0x2042D8u, 0x2042E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2042E0u;
label_2042e0:
    // 0x2042e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2042e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2042e4: 0x2e02000a  sltiu       $v0, $s0, 0xA
    ctx->pc = 0x2042e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2042e8: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x2042E8u;
    {
        const bool branch_taken_0x2042e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2042ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2042E8u;
        // 0x2042ec: 0x66020030  daddiu      $v0, $s0, 0x30 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)48);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2042e8) {
            ctx->pc = 0x2042B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2042b8;
        }
    }
    ctx->pc = 0x2042F0u;
    // 0x2042f0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2042F0u;
    {
        const bool branch_taken_0x2042f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2042F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2042F0u;
        // 0x2042f4: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2042f0) {
            ctx->pc = 0x204308u;
            goto label_204308;
        }
    }
    ctx->pc = 0x2042F8u;
label_2042f8:
    // 0x2042f8: 0x27b50060  addiu       $s5, $sp, 0x60
    ctx->pc = 0x2042f8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2042fc: 0x33d60084  andi        $s6, $fp, 0x84
    ctx->pc = 0x2042fcu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)132);
    // 0x204300: 0x66020030  daddiu      $v0, $s0, 0x30
    ctx->pc = 0x204300u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)48);
    // 0x204304: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x204304u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_204308:
    // 0x204308: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x204308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20430c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x20430Cu;
    {
        const bool branch_taken_0x20430c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20430Cu;
        // 0x204310: 0xa2620000  sb          $v0, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20430c) {
            ctx->pc = 0x204358u;
            goto label_204358;
        }
    }
    ctx->pc = 0x204314u;
label_204314:
    // 0x204314: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x204314u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x204318: 0x27b50060  addiu       $s5, $sp, 0x60
    ctx->pc = 0x204318u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x20431c: 0x33d60084  andi        $s6, $fp, 0x84
    ctx->pc = 0x20431cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)132);
label_204320:
    // 0x204320: 0x3202000f  andi        $v0, $s0, 0xF
    ctx->pc = 0x204320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
    // 0x204324: 0x8fa60214  lw          $a2, 0x214($sp)
    ctx->pc = 0x204324u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 532)));
    // 0x204328: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x204328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x20432c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x20432cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x204330: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x204330u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x204334: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x204334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x204338: 0x10813a  dsrl        $s0, $s0, 4
    ctx->pc = 0x204338u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 4);
    // 0x20433c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x20433cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x204340: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x204340u;
    {
        const bool branch_taken_0x204340 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x204344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204340u;
        // 0x204344: 0xa2630000  sb          $v1, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204340) {
            ctx->pc = 0x204320u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_204320;
        }
    }
    ctx->pc = 0x204348u;
    // 0x204348: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x204348u;
    {
        const bool branch_taken_0x204348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20434Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204348u;
        // 0x20434c: 0x2662fea4  addiu       $v0, $s3, -0x15C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966948));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204348) {
            ctx->pc = 0x20435Cu;
            goto label_20435c;
        }
    }
    ctx->pc = 0x204350u;
label_204350:
    // 0x204350: 0x27b50060  addiu       $s5, $sp, 0x60
    ctx->pc = 0x204350u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x204354: 0x33d60084  andi        $s6, $fp, 0x84
    ctx->pc = 0x204354u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)132);
label_204358:
    // 0x204358: 0x2662fea4  addiu       $v0, $s3, -0x15C
    ctx->pc = 0x204358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966948));
label_20435c:
    // 0x20435c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x20435Cu;
    {
        const bool branch_taken_0x20435c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20435Cu;
        // 0x204360: 0x2a2a823  subu        $s5, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20435c) {
            ctx->pc = 0x204380u;
            goto label_204380;
        }
    }
    ctx->pc = 0x204364u;
label_204364:
    // 0x204364: 0x12e002fc  beqz        $s7, . + 4 + (0x2FC << 2)
    ctx->pc = 0x204364u;
    {
        const bool branch_taken_0x204364 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x204368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204364u;
        // 0x204368: 0x27b30060  addiu       $s3, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204364) {
            ctx->pc = 0x204F58u;
            goto label_204f58;
        }
    }
    ctx->pc = 0x20436Cu;
    // 0x20436c: 0xa3b70060  sb          $s7, 0x60($sp)
    ctx->pc = 0x20436cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 23));
    // 0x204370: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x204370u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_204374:
    // 0x204374: 0xa3a001d1  sb          $zero, 0x1D1($sp)
    ctx->pc = 0x204374u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 0));
label_204378:
    // 0x204378: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x204378u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_20437c:
    // 0x20437c: 0x33d60084  andi        $s6, $fp, 0x84
    ctx->pc = 0x20437cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)132);
label_204380:
    // 0x204380: 0xafb50210  sw          $s5, 0x210($sp)
    ctx->pc = 0x204380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 21));
    // 0x204384: 0x8fa4020c  lw          $a0, 0x20C($sp)
    ctx->pc = 0x204384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
    // 0x204388: 0x8fa5020c  lw          $a1, 0x20C($sp)
    ctx->pc = 0x204388u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
    // 0x20438c: 0x2a4102a  slt         $v0, $s5, $a0
    ctx->pc = 0x20438cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x204390: 0x83a301d1  lb          $v1, 0x1D1($sp)
    ctx->pc = 0x204390u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 465)));
    // 0x204394: 0x2a2280a  movz        $a1, $s5, $v0
    ctx->pc = 0x204394u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 21));
    // 0x204398: 0x93a401d1  lbu         $a0, 0x1D1($sp)
    ctx->pc = 0x204398u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 465)));
    // 0x20439c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x20439Cu;
    {
        const bool branch_taken_0x20439c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2043A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20439Cu;
        // 0x2043a0: 0xafa50210  sw          $a1, 0x210($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20439c) {
            ctx->pc = 0x2043B0u;
            goto label_2043b0;
        }
    }
    ctx->pc = 0x2043A4u;
    // 0x2043a4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2043a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2043a8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2043A8u;
    {
        const bool branch_taken_0x2043a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2043ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2043A8u;
        // 0x2043ac: 0xafa50210  sw          $a1, 0x210($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2043a8) {
            ctx->pc = 0x2043C0u;
            goto label_2043c0;
        }
    }
    ctx->pc = 0x2043B0u;
label_2043b0:
    // 0x2043b0: 0x8fa60210  lw          $a2, 0x210($sp)
    ctx->pc = 0x2043b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x2043b4: 0x33c20002  andi        $v0, $fp, 0x2
    ctx->pc = 0x2043b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)2);
    // 0x2043b8: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x2043b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2043bc: 0xafa60210  sw          $a2, 0x210($sp)
    ctx->pc = 0x2043bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 6));
label_2043c0:
    // 0x2043c0: 0x16c00037  bnez        $s6, . + 4 + (0x37 << 2)
    ctx->pc = 0x2043C0u;
    {
        const bool branch_taken_0x2043c0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x2043C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2043C0u;
        // 0x2043c4: 0x8fa201f4  lw          $v0, 0x1F4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2043c0) {
            ctx->pc = 0x2044A0u;
            goto label_2044a0;
        }
    }
    ctx->pc = 0x2043C8u;
    // 0x2043c8: 0x8fa30210  lw          $v1, 0x210($sp)
    ctx->pc = 0x2043c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x2043cc: 0x438023  subu        $s0, $v0, $v1
    ctx->pc = 0x2043ccu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2043d0: 0x1a000033  blez        $s0, . + 4 + (0x33 << 2)
    ctx->pc = 0x2043D0u;
    {
        const bool branch_taken_0x2043d0 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2043D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2043D0u;
        // 0x2043d4: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2043d0) {
            ctx->pc = 0x2044A0u;
            goto label_2044a0;
        }
    }
    ctx->pc = 0x2043D8u;
    // 0x2043d8: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2043D8u;
    {
        const bool branch_taken_0x2043d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2043DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2043D8u;
        // 0x2043dc: 0x3c060022  lui         $a2, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2043d8) {
            ctx->pc = 0x204448u;
            goto label_204448;
        }
    }
    ctx->pc = 0x2043E0u;
    // 0x2043e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2043E0u;
    {
        const bool branch_taken_0x2043e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2043E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2043E0u;
        // 0x2043e4: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2043e0) {
            ctx->pc = 0x2043ECu;
            goto label_2043ec;
        }
    }
    ctx->pc = 0x2043E8u;
label_2043e8:
    // 0x2043e8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2043e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2043ec:
    // 0x2043ec: 0x24c45180  addiu       $a0, $a2, 0x5180
    ctx->pc = 0x2043ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 20864));
    // 0x2043f0: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x2043f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x2043f4: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2043f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x2043f8: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x2043f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2043fc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2043fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x204400: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x204400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x204404: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x204404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x204408: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x204408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20440c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x20440cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x204410: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x204410u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x204414: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x204414u;
    {
        const bool branch_taken_0x204414 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x204418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204414u;
        // 0x204418: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204414) {
            ctx->pc = 0x204438u;
            goto label_204438;
        }
    }
    ctx->pc = 0x20441Cu;
    // 0x20441c: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x20441cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x204420: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x204420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x204424: 0xc080e4c  jal         func_203930
    ctx->pc = 0x204424u;
    SET_GPR_U32(ctx, 31, 0x20442Cu);
    ctx->pc = 0x204428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204424u;
    // 0x204428: 0x7fa60220  sq          $a2, 0x220($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203930u, 0x204424u, 0x20442Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20442Cu;
label_20442c:
    // 0x20442c: 0x144002d2  bnez        $v0, . + 4 + (0x2D2 << 2)
    ctx->pc = 0x20442Cu;
    {
        const bool branch_taken_0x20442c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x204430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20442Cu;
        // 0x204430: 0x7ba60220  lq          $a2, 0x220($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20442c) {
            ctx->pc = 0x204F78u;
            goto label_204f78;
        }
    }
    ctx->pc = 0x204434u;
    // 0x204434: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x204434u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_204438:
    // 0x204438: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x204438u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x20443c: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x20443cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x204440: 0x1040ffe9  beqz        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x204440u;
    {
        const bool branch_taken_0x204440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x204444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204440u;
        // 0x204444: 0x26320008  addiu       $s2, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204440) {
            ctx->pc = 0x2043E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2043e8;
        }
    }
    ctx->pc = 0x204448u;
label_204448:
    // 0x204448: 0x24c25180  addiu       $v0, $a2, 0x5180
    ctx->pc = 0x204448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 20864));
    // 0x20444c: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x20444cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x204450: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x204450u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x204454: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x204454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x204458: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x204458u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20445c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20445cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x204460: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x204460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x204464: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x204464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x204468: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x204468u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x20446c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x20446cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x204470: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x204470u;
    {
        const bool branch_taken_0x204470 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x204474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204470u;
        // 0x204474: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204470) {
            ctx->pc = 0x204498u;
            goto label_204498;
        }
    }
    ctx->pc = 0x204478u;
    // 0x204478: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x204478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x20447c: 0xc080e4c  jal         func_203930
    ctx->pc = 0x20447Cu;
    SET_GPR_U32(ctx, 31, 0x204484u);
    ctx->pc = 0x204480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20447Cu;
    // 0x204480: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203930u, 0x20447Cu, 0x204484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204484u;
label_204484:
    // 0x204484: 0x144002bc  bnez        $v0, . + 4 + (0x2BC << 2)
    ctx->pc = 0x204484u;
    {
        const bool branch_taken_0x204484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x204488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204484u;
        // 0x204488: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204484) {
            ctx->pc = 0x204F78u;
            goto label_204f78;
        }
    }
    ctx->pc = 0x20448Cu;
    // 0x20448c: 0x27b20028  addiu       $s2, $sp, 0x28
    ctx->pc = 0x20448cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x204490: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x204490u;
    {
        const bool branch_taken_0x204490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204490u;
        // 0x204494: 0x93a401d1  lbu         $a0, 0x1D1($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 465)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204490) {
            ctx->pc = 0x2044A0u;
            goto label_2044a0;
        }
    }
    ctx->pc = 0x204498u;
label_204498:
    // 0x204498: 0x93a401d1  lbu         $a0, 0x1D1($sp)
    ctx->pc = 0x204498u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 465)));
    // 0x20449c: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x20449cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_2044a0:
    // 0x2044a0: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x2044A0u;
    {
        const bool branch_taken_0x2044a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2044A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2044A0u;
        // 0x2044a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2044a0) {
            ctx->pc = 0x2044E0u;
            goto label_2044e0;
        }
    }
    ctx->pc = 0x2044A8u;
    // 0x2044a8: 0x27a401d1  addiu       $a0, $sp, 0x1D1
    ctx->pc = 0x2044a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 465));
    // 0x2044ac: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x2044acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x2044b0: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2044b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x2044b4: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x2044b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2044b8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2044b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2044bc: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2044bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2044c0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2044c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2044c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2044c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2044c8: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x2044c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x2044cc: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x2044ccu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2044d0: 0x1480001c  bnez        $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2044D0u;
    {
        const bool branch_taken_0x2044d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2044D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2044D0u;
        // 0x2044d4: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2044d0) {
            ctx->pc = 0x204544u;
            goto label_204544;
        }
    }
    ctx->pc = 0x2044D8u;
    // 0x2044d8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2044D8u;
    {
        const bool branch_taken_0x2044d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2044DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2044D8u;
        // 0x2044dc: 0x8fa401e8  lw          $a0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2044d8) {
            ctx->pc = 0x20452Cu;
            goto label_20452c;
        }
    }
    ctx->pc = 0x2044E0u;
label_2044e0:
    // 0x2044e0: 0x33c20002  andi        $v0, $fp, 0x2
    ctx->pc = 0x2044e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)2);
    // 0x2044e4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2044E4u;
    {
        const bool branch_taken_0x2044e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2044E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2044E4u;
        // 0x2044e8: 0x24030030  addiu       $v1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2044e4) {
            ctx->pc = 0x204548u;
            goto label_204548;
        }
    }
    ctx->pc = 0x2044ECu;
    // 0x2044ec: 0xa3b701c1  sb          $s7, 0x1C1($sp)
    ctx->pc = 0x2044ecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 449), (uint8_t)GPR_U32(ctx, 23));
    // 0x2044f0: 0xa3a301c0  sb          $v1, 0x1C0($sp)
    ctx->pc = 0x2044f0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 448), (uint8_t)GPR_U32(ctx, 3));
    // 0x2044f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2044f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2044f8: 0x27a301c0  addiu       $v1, $sp, 0x1C0
    ctx->pc = 0x2044f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x2044fc: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2044fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x204500: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x204500u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x204504: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x204504u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204508: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x204508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20450c: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x20450cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x204510: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x204510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x204514: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x204514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x204518: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x204518u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x20451c: 0x28430008  slti        $v1, $v0, 0x8
    ctx->pc = 0x20451cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x204520: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x204520u;
    {
        const bool branch_taken_0x204520 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x204524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204520u;
        // 0x204524: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204520) {
            ctx->pc = 0x204544u;
            goto label_204544;
        }
    }
    ctx->pc = 0x204528u;
    // 0x204528: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x204528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_20452c:
    // 0x20452c: 0xc080e4c  jal         func_203930
    ctx->pc = 0x20452Cu;
    SET_GPR_U32(ctx, 31, 0x204534u);
    ctx->pc = 0x204530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20452Cu;
    // 0x204530: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203930u, 0x20452Cu, 0x204534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204534u;
label_204534:
    // 0x204534: 0x14400290  bnez        $v0, . + 4 + (0x290 << 2)
    ctx->pc = 0x204534u;
    {
        const bool branch_taken_0x204534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x204538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204534u;
        // 0x204538: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204534) {
            ctx->pc = 0x204F78u;
            goto label_204f78;
        }
    }
    ctx->pc = 0x20453Cu;
    // 0x20453c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20453Cu;
    {
        const bool branch_taken_0x20453c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20453Cu;
        // 0x204540: 0x27b20028  addiu       $s2, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20453c) {
            ctx->pc = 0x204548u;
            goto label_204548;
        }
    }
    ctx->pc = 0x204544u;
label_204544:
    // 0x204544: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x204544u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_204548:
    // 0x204548: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x204548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x20454c: 0x16c20035  bne         $s6, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x20454Cu;
    {
        const bool branch_taken_0x20454c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x204550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20454Cu;
        // 0x204550: 0x8fa6020c  lw          $a2, 0x20C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20454c) {
            ctx->pc = 0x204624u;
            goto label_204624;
        }
    }
    ctx->pc = 0x204554u;
    // 0x204554: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x204554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x204558: 0x8fa50210  lw          $a1, 0x210($sp)
    ctx->pc = 0x204558u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x20455c: 0x858023  subu        $s0, $a0, $a1
    ctx->pc = 0x20455cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x204560: 0x1a000030  blez        $s0, . + 4 + (0x30 << 2)
    ctx->pc = 0x204560u;
    {
        const bool branch_taken_0x204560 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x204564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204560u;
        // 0x204564: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x204560) {
            ctx->pc = 0x204624u;
            goto label_204624;
        }
    }
    ctx->pc = 0x204568u;
    // 0x204568: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x204568u;
    {
        const bool branch_taken_0x204568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20456Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204568u;
        // 0x20456c: 0x3c160022  lui         $s6, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204568) {
            ctx->pc = 0x2045D0u;
            goto label_2045d0;
        }
    }
    ctx->pc = 0x204570u;
    // 0x204570: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x204570u;
    {
        const bool branch_taken_0x204570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204570u;
        // 0x204574: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204570) {
            ctx->pc = 0x20457Cu;
            goto label_20457c;
        }
    }
    ctx->pc = 0x204578u;
label_204578:
    // 0x204578: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x204578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_20457c:
    // 0x20457c: 0x26c45190  addiu       $a0, $s6, 0x5190
    ctx->pc = 0x20457cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 20880));
    // 0x204580: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x204580u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x204584: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x204584u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x204588: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x204588u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20458c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20458cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x204590: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x204590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x204594: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x204594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x204598: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x204598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20459c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x20459cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x2045a0: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x2045a0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2045a4: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2045A4u;
    {
        const bool branch_taken_0x2045a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2045A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2045A4u;
        // 0x2045a8: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2045a4) {
            ctx->pc = 0x2045C0u;
            goto label_2045c0;
        }
    }
    ctx->pc = 0x2045ACu;
    // 0x2045ac: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x2045acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x2045b0: 0xc080e4c  jal         func_203930
    ctx->pc = 0x2045B0u;
    SET_GPR_U32(ctx, 31, 0x2045B8u);
    ctx->pc = 0x2045B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2045B0u;
    // 0x2045b4: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203930u, 0x2045B0u, 0x2045B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2045B8u;
label_2045b8:
    // 0x2045b8: 0x1440026f  bnez        $v0, . + 4 + (0x26F << 2)
    ctx->pc = 0x2045B8u;
    {
        const bool branch_taken_0x2045b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2045BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2045B8u;
        // 0x2045bc: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2045b8) {
            ctx->pc = 0x204F78u;
            goto label_204f78;
        }
    }
    ctx->pc = 0x2045C0u;
label_2045c0:
    // 0x2045c0: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x2045c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x2045c4: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x2045c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x2045c8: 0x1040ffeb  beqz        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2045C8u;
    {
        const bool branch_taken_0x2045c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2045CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2045C8u;
        // 0x2045cc: 0x26320008  addiu       $s2, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2045c8) {
            ctx->pc = 0x204578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_204578;
        }
    }
    ctx->pc = 0x2045D0u;
label_2045d0:
    // 0x2045d0: 0x26c25190  addiu       $v0, $s6, 0x5190
    ctx->pc = 0x2045d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 20880));
    // 0x2045d4: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x2045d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x2045d8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2045d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2045dc: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2045dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2045e0: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x2045e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2045e4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2045e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2045e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2045e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2045ec: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2045ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2045f0: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x2045f0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2045f4: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x2045f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x2045f8: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2045F8u;
    {
        const bool branch_taken_0x2045f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2045FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2045F8u;
        // 0x2045fc: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2045f8) {
            ctx->pc = 0x20461Cu;
            goto label_20461c;
        }
    }
    ctx->pc = 0x204600u;
    // 0x204600: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x204600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x204604: 0xc080e4c  jal         func_203930
    ctx->pc = 0x204604u;
    SET_GPR_U32(ctx, 31, 0x20460Cu);
    ctx->pc = 0x204608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204604u;
    // 0x204608: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203930u, 0x204604u, 0x20460Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20460Cu;
label_20460c:
    // 0x20460c: 0x1440025a  bnez        $v0, . + 4 + (0x25A << 2)
    ctx->pc = 0x20460Cu;
    {
        const bool branch_taken_0x20460c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x204610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20460Cu;
        // 0x204610: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20460c) {
            ctx->pc = 0x204F78u;
            goto label_204f78;
        }
    }
    ctx->pc = 0x204614u;
    // 0x204614: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x204614u;
    {
        const bool branch_taken_0x204614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204614u;
        // 0x204618: 0x27b20028  addiu       $s2, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204614) {
            ctx->pc = 0x204620u;
            goto label_204620;
        }
    }
    ctx->pc = 0x20461Cu;
label_20461c:
    // 0x20461c: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x20461cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_204620:
    // 0x204620: 0x8fa6020c  lw          $a2, 0x20C($sp)
    ctx->pc = 0x204620u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
label_204624:
    // 0x204624: 0xd58023  subu        $s0, $a2, $s5
    ctx->pc = 0x204624u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 21)));
    // 0x204628: 0x1a00002f  blez        $s0, . + 4 + (0x2F << 2)
    ctx->pc = 0x204628u;
    {
        const bool branch_taken_0x204628 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x20462Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204628u;
        // 0x20462c: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x204628) {
            ctx->pc = 0x2046E8u;
            goto label_2046e8;
        }
    }
    ctx->pc = 0x204630u;
    // 0x204630: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x204630u;
    {
        const bool branch_taken_0x204630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x204634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204630u;
        // 0x204634: 0x3c160022  lui         $s6, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204630) {
            ctx->pc = 0x204698u;
            goto label_204698;
        }
    }
    ctx->pc = 0x204638u;
    // 0x204638: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x204638u;
    {
        const bool branch_taken_0x204638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20463Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204638u;
        // 0x20463c: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204638) {
            ctx->pc = 0x204644u;
            goto label_204644;
        }
    }
    ctx->pc = 0x204640u;
label_204640:
    // 0x204640: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x204640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_204644:
    // 0x204644: 0x26c45190  addiu       $a0, $s6, 0x5190
    ctx->pc = 0x204644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 20880));
    // 0x204648: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x204648u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x20464c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x20464cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x204650: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x204650u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204654: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x204654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x204658: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x204658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x20465c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x20465cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x204660: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x204660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x204664: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x204664u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x204668: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x204668u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x20466c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20466Cu;
    {
        const bool branch_taken_0x20466c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x204670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20466Cu;
        // 0x204670: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20466c) {
            ctx->pc = 0x204688u;
            goto label_204688;
        }
    }
    ctx->pc = 0x204674u;
    // 0x204674: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x204674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x204678: 0xc080e4c  jal         func_203930
    ctx->pc = 0x204678u;
    SET_GPR_U32(ctx, 31, 0x204680u);
    ctx->pc = 0x20467Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204678u;
    // 0x20467c: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203930u, 0x204678u, 0x204680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204680u;
label_204680:
    // 0x204680: 0x1440023d  bnez        $v0, . + 4 + (0x23D << 2)
    ctx->pc = 0x204680u;
    {
        const bool branch_taken_0x204680 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x204684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204680u;
        // 0x204684: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204680) {
            ctx->pc = 0x204F78u;
            goto label_204f78;
        }
    }
    ctx->pc = 0x204688u;
label_204688:
    // 0x204688: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x204688u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x20468c: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x20468cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x204690: 0x1040ffeb  beqz        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x204690u;
    {
        const bool branch_taken_0x204690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x204694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204690u;
        // 0x204694: 0x26320008  addiu       $s2, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204690) {
            ctx->pc = 0x204640u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_204640;
        }
    }
    ctx->pc = 0x204698u;
label_204698:
    // 0x204698: 0x26c25190  addiu       $v0, $s6, 0x5190
    ctx->pc = 0x204698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 20880));
    // 0x20469c: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x20469cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x2046a0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2046a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2046a4: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2046a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2046a8: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x2046a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2046ac: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2046acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2046b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2046b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2046b4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2046b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2046b8: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x2046b8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2046bc: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x2046bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x2046c0: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2046C0u;
    {
        const bool branch_taken_0x2046c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2046C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2046C0u;
        // 0x2046c4: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2046c0) {
            ctx->pc = 0x2046E4u;
            goto label_2046e4;
        }
    }
    ctx->pc = 0x2046C8u;
    // 0x2046c8: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x2046c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x2046cc: 0xc080e4c  jal         func_203930
    ctx->pc = 0x2046CCu;
    SET_GPR_U32(ctx, 31, 0x2046D4u);
    ctx->pc = 0x2046D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2046CCu;
    // 0x2046d0: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203930u, 0x2046CCu, 0x2046D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2046D4u;
label_2046d4:
    // 0x2046d4: 0x14400228  bnez        $v0, . + 4 + (0x228 << 2)
    ctx->pc = 0x2046D4u;
    {
        const bool branch_taken_0x2046d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2046D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2046D4u;
        // 0x2046d8: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2046d4) {
            ctx->pc = 0x204F78u;
            goto label_204f78;
        }
    }
    ctx->pc = 0x2046DCu;
    // 0x2046dc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2046DCu;
    {
        const bool branch_taken_0x2046dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2046E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2046DCu;
        // 0x2046e0: 0x27b20028  addiu       $s2, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2046dc) {
            ctx->pc = 0x2046E8u;
            goto label_2046e8;
        }
    }
    ctx->pc = 0x2046E4u;
label_2046e4:
    // 0x2046e4: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x2046e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_2046e8:
    // 0x2046e8: 0x33c20100  andi        $v0, $fp, 0x100
    ctx->pc = 0x2046e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)256);
    // 0x2046ec: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2046ECu;
    {
        const bool branch_taken_0x2046ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2046ec) {
            ctx->pc = 0x2046F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2046ECu;
            // 0x2046f0: 0x2ae20066  slti        $v0, $s7, 0x66 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)102) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x204710u;
            goto label_204710;
        }
    }
    ctx->pc = 0x2046F4u;
    // 0x2046f4: 0xae350004  sw          $s5, 0x4($s1)
    ctx->pc = 0x2046f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 21));
    // 0x2046f8: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x2046f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x2046fc: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x2046fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204700: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x204700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x204704: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x204704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x204708: 0x100001c3  b           . + 4 + (0x1C3 << 2)
    ctx->pc = 0x204708u;
    {
        const bool branch_taken_0x204708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20470Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204708u;
        // 0x20470c: 0x551021  addu        $v0, $v0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204708) {
            ctx->pc = 0x204E18u;
            goto label_204e18;
        }
    }
    ctx->pc = 0x204710u;
label_204710:
    // 0x204710: 0x1440014e  bnez        $v0, . + 4 + (0x14E << 2)
    ctx->pc = 0x204710u;
    {
        const bool branch_taken_0x204710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x204714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204710u;
        // 0x204714: 0x8fa201e0  lw          $v0, 0x1E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204710) {
            ctx->pc = 0x204C4Cu;
            goto label_204c4c;
        }
    }
    ctx->pc = 0x204718u;
    // 0x204718: 0xdfa40200  ld          $a0, 0x200($sp)
    ctx->pc = 0x204718u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x20471c: 0xc082178  jal         func_2085E0
    ctx->pc = 0x20471Cu;
    SET_GPR_U32(ctx, 31, 0x204724u);
    ctx->pc = 0x204720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20471Cu;
    // 0x204720: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E0u, 0x20471Cu, 0x204724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204724u;
label_204724:
    // 0x204724: 0x14400058  bnez        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x204724u;
    {
        const bool branch_taken_0x204724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x204728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204724u;
        // 0x204728: 0x8fa301dc  lw          $v1, 0x1DC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204724) {
            ctx->pc = 0x204888u;
            goto label_204888;
        }
    }
    ctx->pc = 0x20472Cu;
    // 0x20472c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x20472cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x204730: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x204730u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204734: 0x24425208  addiu       $v0, $v0, 0x5208
    ctx->pc = 0x204734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21000));
    // 0x204738: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x204738u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x20473c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x20473cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x204740: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x204740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x204744: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x204744u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204748: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x204748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20474c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20474cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x204750: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x204750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x204754: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x204754u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x204758: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x204758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x20475c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20475Cu;
    {
        const bool branch_taken_0x20475c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x204760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20475Cu;
        // 0x204760: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20475c) {
            ctx->pc = 0x204778u;
            goto label_204778;
        }
    }
    ctx->pc = 0x204764u;
    // 0x204764: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x204764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x204768: 0xc080e4c  jal         func_203930
    ctx->pc = 0x204768u;
    SET_GPR_U32(ctx, 31, 0x204770u);
    ctx->pc = 0x20476Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204768u;
    // 0x20476c: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203930u, 0x204768u, 0x204770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204770u;
label_204770:
    // 0x204770: 0x14400201  bnez        $v0, . + 4 + (0x201 << 2)
    ctx->pc = 0x204770u;
    {
        const bool branch_taken_0x204770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x204774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204770u;
        // 0x204774: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204770) {
            ctx->pc = 0x204F78u;
            goto label_204f78;
        }
    }
    ctx->pc = 0x204778u;
label_204778:
    // 0x204778: 0x8fa201dc  lw          $v0, 0x1DC($sp)
    ctx->pc = 0x204778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x20477c: 0x8fa301e0  lw          $v1, 0x1E0($sp)
    ctx->pc = 0x20477cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x204780: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x204780u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x204784: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x204784u;
    {
        const bool branch_taken_0x204784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x204784) {
            ctx->pc = 0x204788u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x204784u;
            // 0x204788: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20479Cu;
            goto label_20479c;
        }
    }
    ctx->pc = 0x20478Cu;
    // 0x20478c: 0x33c20001  andi        $v0, $fp, 0x1
    ctx->pc = 0x20478cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
    // 0x204790: 0x104001ad  beqz        $v0, . + 4 + (0x1AD << 2)
    ctx->pc = 0x204790u;
    {
        const bool branch_taken_0x204790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x204794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204790u;
        // 0x204794: 0x33c20004  andi        $v0, $fp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x204790) {
            ctx->pc = 0x204E48u;
            goto label_204e48;
        }
    }
    ctx->pc = 0x204798u;
    // 0x204798: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x204798u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_20479c:
    // 0x20479c: 0x8fa201f8  lw          $v0, 0x1F8($sp)
    ctx->pc = 0x20479cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x2047a0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2047a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2047a4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2047a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2047a8: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x2047a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x2047ac: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x2047acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2047b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2047b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2047b4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2047b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2047b8: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x2047b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x2047bc: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x2047bcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2047c0: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2047C0u;
    {
        const bool branch_taken_0x2047c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2047C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2047C0u;
        // 0x2047c4: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2047c0) {
            ctx->pc = 0x2047DCu;
            goto label_2047dc;
        }
    }
    ctx->pc = 0x2047C8u;
    // 0x2047c8: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x2047c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x2047cc: 0xc080e4c  jal         func_203930
    ctx->pc = 0x2047CCu;
    SET_GPR_U32(ctx, 31, 0x2047D4u);
    ctx->pc = 0x2047D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2047CCu;
    // 0x2047d0: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203930u, 0x2047CCu, 0x2047D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2047D4u;
label_2047d4:
    // 0x2047d4: 0x144001e8  bnez        $v0, . + 4 + (0x1E8 << 2)
    ctx->pc = 0x2047D4u;
    {
        const bool branch_taken_0x2047d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2047D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2047D4u;
        // 0x2047d8: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2047d4) {
            ctx->pc = 0x204F78u;
            goto label_204f78;
        }
    }
    ctx->pc = 0x2047DCu;
label_2047dc:
    // 0x2047dc: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x2047dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2047e0: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x2047e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2047e4: 0x1a000197  blez        $s0, . + 4 + (0x197 << 2)
    ctx->pc = 0x2047E4u;
    {
        const bool branch_taken_0x2047e4 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2047E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2047E4u;
        // 0x2047e8: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2047e4) {
            ctx->pc = 0x204E44u;
            goto label_204e44;
        }
    }
    ctx->pc = 0x2047ECu;
    // 0x2047ec: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2047ECu;
    {
        const bool branch_taken_0x2047ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2047F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2047ECu;
        // 0x2047f0: 0x3c160022  lui         $s6, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2047ec) {
            ctx->pc = 0x204858u;
            goto label_204858;
        }
    }
    ctx->pc = 0x2047F4u;
    // 0x2047f4: 0x0  nop
    ctx->pc = 0x2047f4u;
    // NOP
label_2047f8:
    // 0x2047f8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2047f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2047fc: 0x26c45190  addiu       $a0, $s6, 0x5190
    ctx->pc = 0x2047fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 20880));
    // 0x204800: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x204800u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x204804: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x204804u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x204808: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x204808u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x20480c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20480cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x204810: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x204810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x204814: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x204814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x204818: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x204818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20481c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x20481cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x204820: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x204820u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x204824: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x204824u;
    {
        const bool branch_taken_0x204824 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x204828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204824u;
        // 0x204828: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204824) {
            ctx->pc = 0x204840u;
            goto label_204840;
        }
    }
    ctx->pc = 0x20482Cu;
    // 0x20482c: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x20482cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x204830: 0xc080e4c  jal         func_203930
    ctx->pc = 0x204830u;
    SET_GPR_U32(ctx, 31, 0x204838u);
    ctx->pc = 0x204834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204830u;
    // 0x204834: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203930u, 0x204830u, 0x204838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204838u;
label_204838:
    // 0x204838: 0x144001cf  bnez        $v0, . + 4 + (0x1CF << 2)
    ctx->pc = 0x204838u;
    {
        const bool branch_taken_0x204838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20483Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204838u;
        // 0x20483c: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204838) {
            ctx->pc = 0x204F78u;
            goto label_204f78;
        }
    }
    ctx->pc = 0x204840u;
label_204840:
    // 0x204840: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x204840u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x204844: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x204844u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x204848: 0x1040ffeb  beqz        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x204848u;
    {
        const bool branch_taken_0x204848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20484Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204848u;
        // 0x20484c: 0x26c25190  addiu       $v0, $s6, 0x5190 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 20880));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204848) {
            ctx->pc = 0x2047F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2047f8;
        }
    }
    ctx->pc = 0x204850u;
    // 0x204850: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x204850u;
    {
        const bool branch_taken_0x204850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204850u;
        // 0x204854: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204850) {
            ctx->pc = 0x204860u;
            goto label_204860;
        }
    }
    ctx->pc = 0x204858u;
label_204858:
    // 0x204858: 0x26c25190  addiu       $v0, $s6, 0x5190
    ctx->pc = 0x204858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 20880));
    // 0x20485c: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x20485cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_204860:
    // 0x204860: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x204860u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x204864: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x204864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x204868: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x204868u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x20486c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20486cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x204870: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x204870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x204874: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x204874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x204878: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x204878u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x20487c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x20487cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x204880: 0x10000169  b           . + 4 + (0x169 << 2)
    ctx->pc = 0x204880u;
    {
        const bool branch_taken_0x204880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204880u;
        // 0x204884: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204880) {
            ctx->pc = 0x204E28u;
            goto label_204e28;
        }
    }
    ctx->pc = 0x204888u;
label_204888:
    // 0x204888: 0x1c600063  bgtz        $v1, . + 4 + (0x63 << 2)
    ctx->pc = 0x204888u;
    {
        const bool branch_taken_0x204888 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x20488Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204888u;
        // 0x20488c: 0x8fa401e0  lw          $a0, 0x1E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204888) {
            ctx->pc = 0x204A18u;
            goto label_204a18;
        }
    }
    ctx->pc = 0x204890u;
    // 0x204890: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x204890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x204894: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x204894u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204898: 0x24425208  addiu       $v0, $v0, 0x5208
    ctx->pc = 0x204898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21000));
    // 0x20489c: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x20489cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x2048a0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2048a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2048a4: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2048a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2048a8: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x2048a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2048ac: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2048acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2048b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2048b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2048b4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2048b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2048b8: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x2048b8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2048bc: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x2048bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x2048c0: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2048C0u;
    {
        const bool branch_taken_0x2048c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2048C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2048C0u;
        // 0x2048c4: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2048c0) {
            ctx->pc = 0x2048DCu;
            goto label_2048dc;
        }
    }
    ctx->pc = 0x2048C8u;
    // 0x2048c8: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x2048c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x2048cc: 0xc080e4c  jal         func_203930
    ctx->pc = 0x2048CCu;
    SET_GPR_U32(ctx, 31, 0x2048D4u);
    ctx->pc = 0x2048D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2048CCu;
    // 0x2048d0: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203930u, 0x2048CCu, 0x2048D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2048D4u;
label_2048d4:
    // 0x2048d4: 0x144001a8  bnez        $v0, . + 4 + (0x1A8 << 2)
    ctx->pc = 0x2048D4u;
    {
        const bool branch_taken_0x2048d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2048D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2048D4u;
        // 0x2048d8: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2048d4) {
            ctx->pc = 0x204F78u;
            goto label_204f78;
        }
    }
    ctx->pc = 0x2048DCu;
label_2048dc:
    // 0x2048dc: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x2048dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x2048e0: 0x8fa301f8  lw          $v1, 0x1F8($sp)
    ctx->pc = 0x2048e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x2048e4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2048e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x2048e8: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x2048e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2048ec: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x2048ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x2048f0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2048f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2048f4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2048f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2048f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2048f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2048fc: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x2048fcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x204900: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x204900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x204904: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x204904u;
    {
        const bool branch_taken_0x204904 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x204908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204904u;
        // 0x204908: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204904) {
            ctx->pc = 0x204920u;
            goto label_204920;
        }
    }
    ctx->pc = 0x20490Cu;
    // 0x20490c: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x20490cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x204910: 0xc080e4c  jal         func_203930
    ctx->pc = 0x204910u;
    SET_GPR_U32(ctx, 31, 0x204918u);
    ctx->pc = 0x204914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204910u;
    // 0x204914: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203930u, 0x204910u, 0x204918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204918u;
label_204918:
    // 0x204918: 0x14400197  bnez        $v0, . + 4 + (0x197 << 2)
    ctx->pc = 0x204918u;
    {
        const bool branch_taken_0x204918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20491Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204918u;
        // 0x20491c: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204918) {
            ctx->pc = 0x204F78u;
            goto label_204f78;
        }
    }
    ctx->pc = 0x204920u;
label_204920:
    // 0x204920: 0x8fa201dc  lw          $v0, 0x1DC($sp)
    ctx->pc = 0x204920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x204924: 0x28023  negu        $s0, $v0
    ctx->pc = 0x204924u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x204928: 0x1a00002c  blez        $s0, . + 4 + (0x2C << 2)
    ctx->pc = 0x204928u;
    {
        const bool branch_taken_0x204928 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x20492Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204928u;
        // 0x20492c: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x204928) {
            ctx->pc = 0x2049DCu;
            goto label_2049dc;
        }
    }
    ctx->pc = 0x204930u;
    // 0x204930: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x204930u;
    {
        const bool branch_taken_0x204930 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x204934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204930u;
        // 0x204934: 0x3c160022  lui         $s6, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204930) {
            ctx->pc = 0x204998u;
            goto label_204998;
        }
    }
    ctx->pc = 0x204938u;
label_204938:
    // 0x204938: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x204938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x20493c: 0x26c45190  addiu       $a0, $s6, 0x5190
    ctx->pc = 0x20493cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 20880));
    // 0x204940: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x204940u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x204944: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x204944u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x204948: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x204948u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x20494c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20494cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x204950: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x204950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x204954: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x204954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x204958: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x204958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20495c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x20495cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x204960: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x204960u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x204964: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x204964u;
    {
        const bool branch_taken_0x204964 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x204968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204964u;
        // 0x204968: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204964) {
            ctx->pc = 0x204980u;
            goto label_204980;
        }
    }
    ctx->pc = 0x20496Cu;
    // 0x20496c: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x20496cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x204970: 0xc080e4c  jal         func_203930
    ctx->pc = 0x204970u;
    SET_GPR_U32(ctx, 31, 0x204978u);
    ctx->pc = 0x204974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204970u;
    // 0x204974: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203930u, 0x204970u, 0x204978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204978u;
label_204978:
    // 0x204978: 0x1440017f  bnez        $v0, . + 4 + (0x17F << 2)
    ctx->pc = 0x204978u;
    {
        const bool branch_taken_0x204978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20497Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204978u;
        // 0x20497c: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204978) {
            ctx->pc = 0x204F78u;
            goto label_204f78;
        }
    }
    ctx->pc = 0x204980u;
label_204980:
    // 0x204980: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x204980u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x204984: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x204984u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x204988: 0x1040ffeb  beqz        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x204988u;
    {
        const bool branch_taken_0x204988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20498Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204988u;
        // 0x20498c: 0x26c25190  addiu       $v0, $s6, 0x5190 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 20880));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204988) {
            ctx->pc = 0x204938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_204938;
        }
    }
    ctx->pc = 0x204990u;
    // 0x204990: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x204990u;
    {
        const bool branch_taken_0x204990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204990u;
        // 0x204994: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204990) {
            ctx->pc = 0x2049A0u;
            goto label_2049a0;
        }
    }
    ctx->pc = 0x204998u;
label_204998:
    // 0x204998: 0x26c25190  addiu       $v0, $s6, 0x5190
    ctx->pc = 0x204998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 20880));
    // 0x20499c: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x20499cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_2049a0:
    // 0x2049a0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2049a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2049a4: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2049a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2049a8: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x2049a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x2049ac: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2049acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2049b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2049b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2049b4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2049b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2049b8: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x2049b8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2049bc: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x2049bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x2049c0: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2049C0u;
    {
        const bool branch_taken_0x2049c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2049C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2049C0u;
        // 0x2049c4: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2049c0) {
            ctx->pc = 0x2049DCu;
            goto label_2049dc;
        }
    }
    ctx->pc = 0x2049C8u;
    // 0x2049c8: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x2049c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x2049cc: 0xc080e4c  jal         func_203930
    ctx->pc = 0x2049CCu;
    SET_GPR_U32(ctx, 31, 0x2049D4u);
    ctx->pc = 0x2049D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2049CCu;
    // 0x2049d0: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203930u, 0x2049CCu, 0x2049D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2049D4u;
label_2049d4:
    // 0x2049d4: 0x14400168  bnez        $v0, . + 4 + (0x168 << 2)
    ctx->pc = 0x2049D4u;
    {
        const bool branch_taken_0x2049d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2049D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2049D4u;
        // 0x2049d8: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2049d4) {
            ctx->pc = 0x204F78u;
            goto label_204f78;
        }
    }
    ctx->pc = 0x2049DCu;
label_2049dc:
    // 0x2049dc: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x2049dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2049e0: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x2049e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x2049e4: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2049e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x2049e8: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x2049e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x2049ec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2049ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2049f0: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2049f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2049f4: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x2049f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2049f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2049f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2049fc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2049fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x204a00: 0x28450008  slti        $a1, $v0, 0x8
    ctx->pc = 0x204a00u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x204a04: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x204a04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x204a08: 0x14a0010e  bnez        $a1, . + 4 + (0x10E << 2)
    ctx->pc = 0x204A08u;
    {
        const bool branch_taken_0x204a08 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x204A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204A08u;
        // 0x204a0c: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204a08) {
            ctx->pc = 0x204E44u;
            goto label_204e44;
        }
    }
    ctx->pc = 0x204A10u;
    // 0x204a10: 0x10000108  b           . + 4 + (0x108 << 2)
    ctx->pc = 0x204A10u;
    {
        const bool branch_taken_0x204a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204A10u;
        // 0x204a14: 0x8fa401e8  lw          $a0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204a10) {
            ctx->pc = 0x204E34u;
            goto label_204e34;
        }
    }
    ctx->pc = 0x204A18u;
label_204a18:
    // 0x204a18: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x204a18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x204a1c: 0x54400053  bnel        $v0, $zero, . + 4 + (0x53 << 2)
    ctx->pc = 0x204A1Cu;
    {
        const bool branch_taken_0x204a1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x204a1c) {
            ctx->pc = 0x204A20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x204A1Cu;
            // 0x204a20: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x204B6Cu;
            goto label_204b6c;
        }
    }
    ctx->pc = 0x204A24u;
    // 0x204a24: 0xae240004  sw          $a0, 0x4($s1)
    ctx->pc = 0x204a24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
    // 0x204a28: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x204a28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x204a2c: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x204a2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204a30: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x204a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x204a34: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x204a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x204a38: 0x8fa501e0  lw          $a1, 0x1E0($sp)
    ctx->pc = 0x204a38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x204a3c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x204a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x204a40: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x204a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x204a44: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x204a44u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x204a48: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x204a48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x204a4c: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x204A4Cu;
    {
        const bool branch_taken_0x204a4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x204A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204A4Cu;
        // 0x204a50: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204a4c) {
            ctx->pc = 0x204A6Cu;
            goto label_204a6c;
        }
    }
    ctx->pc = 0x204A54u;
    // 0x204a54: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x204a54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x204a58: 0xc080e4c  jal         func_203930
    ctx->pc = 0x204A58u;
    SET_GPR_U32(ctx, 31, 0x204A60u);
    ctx->pc = 0x204A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204A58u;
    // 0x204a5c: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203930u, 0x204A58u, 0x204A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204A60u;
label_204a60:
    // 0x204a60: 0x14400145  bnez        $v0, . + 4 + (0x145 << 2)
    ctx->pc = 0x204A60u;
    {
        const bool branch_taken_0x204a60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x204A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204A60u;
        // 0x204a64: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204a60) {
            ctx->pc = 0x204F78u;
            goto label_204f78;
        }
    }
    ctx->pc = 0x204A68u;
    // 0x204a68: 0x8fa501e0  lw          $a1, 0x1E0($sp)
    ctx->pc = 0x204a68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_204a6c:
    // 0x204a6c: 0x8fa201dc  lw          $v0, 0x1DC($sp)
    ctx->pc = 0x204a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x204a70: 0x458023  subu        $s0, $v0, $a1
    ctx->pc = 0x204a70u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x204a74: 0x1a00002d  blez        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x204A74u;
    {
        const bool branch_taken_0x204a74 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x204A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204A74u;
        // 0x204a78: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x204a74) {
            ctx->pc = 0x204B2Cu;
            goto label_204b2c;
        }
    }
    ctx->pc = 0x204A7Cu;
    // 0x204a7c: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x204A7Cu;
    {
        const bool branch_taken_0x204a7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x204A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204A7Cu;
        // 0x204a80: 0x3c160022  lui         $s6, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204a7c) {
            ctx->pc = 0x204AE8u;
            goto label_204ae8;
        }
    }
    ctx->pc = 0x204A84u;
    // 0x204a84: 0x0  nop
    ctx->pc = 0x204a84u;
    // NOP
label_204a88:
    // 0x204a88: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x204a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x204a8c: 0x26c45190  addiu       $a0, $s6, 0x5190
    ctx->pc = 0x204a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 20880));
    // 0x204a90: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x204a90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x204a94: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x204a94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x204a98: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x204a98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x204a9c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x204a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x204aa0: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x204aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x204aa4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x204aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x204aa8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x204aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x204aac: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x204aacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x204ab0: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x204ab0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x204ab4: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x204AB4u;
    {
        const bool branch_taken_0x204ab4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x204AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204AB4u;
        // 0x204ab8: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204ab4) {
            ctx->pc = 0x204AD0u;
            goto label_204ad0;
        }
    }
    ctx->pc = 0x204ABCu;
    // 0x204abc: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x204abcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x204ac0: 0xc080e4c  jal         func_203930
    ctx->pc = 0x204AC0u;
    SET_GPR_U32(ctx, 31, 0x204AC8u);
    ctx->pc = 0x204AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204AC0u;
    // 0x204ac4: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203930u, 0x204AC0u, 0x204AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204AC8u;
label_204ac8:
    // 0x204ac8: 0x1440012b  bnez        $v0, . + 4 + (0x12B << 2)
    ctx->pc = 0x204AC8u;
    {
        const bool branch_taken_0x204ac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x204ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204AC8u;
        // 0x204acc: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204ac8) {
            ctx->pc = 0x204F78u;
            goto label_204f78;
        }
    }
    ctx->pc = 0x204AD0u;
label_204ad0:
    // 0x204ad0: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x204ad0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x204ad4: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x204ad4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x204ad8: 0x1040ffeb  beqz        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x204AD8u;
    {
        const bool branch_taken_0x204ad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x204ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204AD8u;
        // 0x204adc: 0x26c25190  addiu       $v0, $s6, 0x5190 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 20880));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204ad8) {
            ctx->pc = 0x204A88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_204a88;
        }
    }
    ctx->pc = 0x204AE0u;
    // 0x204ae0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x204AE0u;
    {
        const bool branch_taken_0x204ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204AE0u;
        // 0x204ae4: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204ae0) {
            ctx->pc = 0x204AF0u;
            goto label_204af0;
        }
    }
    ctx->pc = 0x204AE8u;
label_204ae8:
    // 0x204ae8: 0x26c25190  addiu       $v0, $s6, 0x5190
    ctx->pc = 0x204ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 20880));
    // 0x204aec: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x204aecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_204af0:
    // 0x204af0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x204af0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x204af4: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x204af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x204af8: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x204af8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x204afc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x204afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x204b00: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x204b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x204b04: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x204b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x204b08: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x204b08u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x204b0c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x204b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x204b10: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x204B10u;
    {
        const bool branch_taken_0x204b10 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x204B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204B10u;
        // 0x204b14: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204b10) {
            ctx->pc = 0x204B2Cu;
            goto label_204b2c;
        }
    }
    ctx->pc = 0x204B18u;
    // 0x204b18: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x204b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x204b1c: 0xc080e4c  jal         func_203930
    ctx->pc = 0x204B1Cu;
    SET_GPR_U32(ctx, 31, 0x204B24u);
    ctx->pc = 0x204B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204B1Cu;
    // 0x204b20: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203930u, 0x204B1Cu, 0x204B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204B24u;
label_204b24:
    // 0x204b24: 0x14400114  bnez        $v0, . + 4 + (0x114 << 2)
    ctx->pc = 0x204B24u;
    {
        const bool branch_taken_0x204b24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x204B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204B24u;
        // 0x204b28: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204b24) {
            ctx->pc = 0x204F78u;
            goto label_204f78;
        }
    }
    ctx->pc = 0x204B2Cu;
label_204b2c:
    // 0x204b2c: 0x33c20001  andi        $v0, $fp, 0x1
    ctx->pc = 0x204b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
    // 0x204b30: 0x104000c4  beqz        $v0, . + 4 + (0xC4 << 2)
    ctx->pc = 0x204B30u;
    {
        const bool branch_taken_0x204b30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x204B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204B30u;
        // 0x204b34: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204b30) {
            ctx->pc = 0x204E44u;
            goto label_204e44;
        }
    }
    ctx->pc = 0x204B38u;
    // 0x204b38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x204b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204b3c: 0x24425210  addiu       $v0, $v0, 0x5210
    ctx->pc = 0x204b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21008));
    // 0x204b40: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x204b40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x204b44: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x204b44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x204b48: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x204b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x204b4c: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x204b4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x204b50: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x204b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x204b54: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x204b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x204b58: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x204b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x204b5c: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x204b5cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x204b60: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x204b60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x204b64: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x204B64u;
    {
        const bool branch_taken_0x204b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204B64u;
        // 0x204b68: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204b64) {
            ctx->pc = 0x204E28u;
            goto label_204e28;
        }
    }
    ctx->pc = 0x204B6Cu;
label_204b6c:
    // 0x204b6c: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x204b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x204b70: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x204b70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204b74: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x204b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x204b78: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x204b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x204b7c: 0x8fa501dc  lw          $a1, 0x1DC($sp)
    ctx->pc = 0x204b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x204b80: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x204b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x204b84: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x204b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x204b88: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x204b88u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x204b8c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x204b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x204b90: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x204B90u;
    {
        const bool branch_taken_0x204b90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x204B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204B90u;
        // 0x204b94: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204b90) {
            ctx->pc = 0x204BB0u;
            goto label_204bb0;
        }
    }
    ctx->pc = 0x204B98u;
    // 0x204b98: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x204b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x204b9c: 0xc080e4c  jal         func_203930
    ctx->pc = 0x204B9Cu;
    SET_GPR_U32(ctx, 31, 0x204BA4u);
    ctx->pc = 0x204BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204B9Cu;
    // 0x204ba0: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203930u, 0x204B9Cu, 0x204BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204BA4u;
label_204ba4:
    // 0x204ba4: 0x144000f4  bnez        $v0, . + 4 + (0xF4 << 2)
    ctx->pc = 0x204BA4u;
    {
        const bool branch_taken_0x204ba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x204BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204BA4u;
        // 0x204ba8: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204ba4) {
            ctx->pc = 0x204F78u;
            goto label_204f78;
        }
    }
    ctx->pc = 0x204BACu;
    // 0x204bac: 0x8fa501dc  lw          $a1, 0x1DC($sp)
    ctx->pc = 0x204bacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
label_204bb0:
    // 0x204bb0: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x204bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x204bb4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x204bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204bb8: 0x24425210  addiu       $v0, $v0, 0x5210
    ctx->pc = 0x204bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21008));
    // 0x204bbc: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x204bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x204bc0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x204bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x204bc4: 0x2659821  addu        $s3, $s3, $a1
    ctx->pc = 0x204bc4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x204bc8: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x204bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x204bcc: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x204bccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x204bd0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x204bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x204bd4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x204bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x204bd8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x204bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x204bdc: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x204bdcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x204be0: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x204be0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x204be4: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x204BE4u;
    {
        const bool branch_taken_0x204be4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x204BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204BE4u;
        // 0x204be8: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204be4) {
            ctx->pc = 0x204C00u;
            goto label_204c00;
        }
    }
    ctx->pc = 0x204BECu;
    // 0x204bec: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x204becu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x204bf0: 0xc080e4c  jal         func_203930
    ctx->pc = 0x204BF0u;
    SET_GPR_U32(ctx, 31, 0x204BF8u);
    ctx->pc = 0x204BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204BF0u;
    // 0x204bf4: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203930u, 0x204BF0u, 0x204BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204BF8u;
label_204bf8:
    // 0x204bf8: 0x144000df  bnez        $v0, . + 4 + (0xDF << 2)
    ctx->pc = 0x204BF8u;
    {
        const bool branch_taken_0x204bf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x204BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204BF8u;
        // 0x204bfc: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204bf8) {
            ctx->pc = 0x204F78u;
            goto label_204f78;
        }
    }
    ctx->pc = 0x204C00u;
label_204c00:
    // 0x204c00: 0x8fa301dc  lw          $v1, 0x1DC($sp)
    ctx->pc = 0x204c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x204c04: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x204c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x204c08: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x204c08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x204c0c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x204c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x204c10: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x204c10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x204c14: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x204c14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x204c18: 0x8fa301e0  lw          $v1, 0x1E0($sp)
    ctx->pc = 0x204c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x204c1c: 0x8fa501dc  lw          $a1, 0x1DC($sp)
    ctx->pc = 0x204c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x204c20: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x204c20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x204c24: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x204c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x204c28: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x204c28u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x204c2c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x204c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x204c30: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x204c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x204c34: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x204c34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x204c38: 0x28430008  slti        $v1, $v0, 0x8
    ctx->pc = 0x204c38u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x204c3c: 0x14600081  bnez        $v1, . + 4 + (0x81 << 2)
    ctx->pc = 0x204C3Cu;
    {
        const bool branch_taken_0x204c3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x204C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204C3Cu;
        // 0x204c40: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204c3c) {
            ctx->pc = 0x204E44u;
            goto label_204e44;
        }
    }
    ctx->pc = 0x204C44u;
    // 0x204c44: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x204C44u;
    {
        const bool branch_taken_0x204c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204C44u;
        // 0x204c48: 0x8fa401e8  lw          $a0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204c44) {
            ctx->pc = 0x204E34u;
            goto label_204e34;
        }
    }
    ctx->pc = 0x204C4Cu;
label_204c4c:
    // 0x204c4c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x204c4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x204c50: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x204C50u;
    {
        const bool branch_taken_0x204c50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x204C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204C50u;
        // 0x204c54: 0x33c20001  andi        $v0, $fp, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x204c50) {
            ctx->pc = 0x204C60u;
            goto label_204c60;
        }
    }
    ctx->pc = 0x204C58u;
    // 0x204c58: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x204C58u;
    {
        const bool branch_taken_0x204c58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x204C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204C58u;
        // 0x204c5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204c58) {
            ctx->pc = 0x204DB8u;
            goto label_204db8;
        }
    }
    ctx->pc = 0x204C60u;
label_204c60:
    // 0x204c60: 0x92640000  lbu         $a0, 0x0($s3)
    ctx->pc = 0x204c60u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x204c64: 0x2402002e  addiu       $v0, $zero, 0x2E
    ctx->pc = 0x204c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x204c68: 0xa3a201c1  sb          $v0, 0x1C1($sp)
    ctx->pc = 0x204c68u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 449), (uint8_t)GPR_U32(ctx, 2));
    // 0x204c6c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x204c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x204c70: 0xa3a401c0  sb          $a0, 0x1C0($sp)
    ctx->pc = 0x204c70u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 448), (uint8_t)GPR_U32(ctx, 4));
    // 0x204c74: 0x27a201c0  addiu       $v0, $sp, 0x1C0
    ctx->pc = 0x204c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x204c78: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x204c78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x204c7c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x204c7cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x204c80: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x204c80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x204c84: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x204c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x204c88: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x204c88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204c8c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x204c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x204c90: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x204c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x204c94: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x204c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x204c98: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x204c98u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x204c9c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x204c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x204ca0: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x204CA0u;
    {
        const bool branch_taken_0x204ca0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x204CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204CA0u;
        // 0x204ca4: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204ca0) {
            ctx->pc = 0x204CBCu;
            goto label_204cbc;
        }
    }
    ctx->pc = 0x204CA8u;
    // 0x204ca8: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x204ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x204cac: 0xc080e4c  jal         func_203930
    ctx->pc = 0x204CACu;
    SET_GPR_U32(ctx, 31, 0x204CB4u);
    ctx->pc = 0x204CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204CACu;
    // 0x204cb0: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203930u, 0x204CACu, 0x204CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204CB4u;
label_204cb4:
    // 0x204cb4: 0x144000b0  bnez        $v0, . + 4 + (0xB0 << 2)
    ctx->pc = 0x204CB4u;
    {
        const bool branch_taken_0x204cb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x204CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204CB4u;
        // 0x204cb8: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204cb4) {
            ctx->pc = 0x204F78u;
            goto label_204f78;
        }
    }
    ctx->pc = 0x204CBCu;
label_204cbc:
    // 0x204cbc: 0xdfa40200  ld          $a0, 0x200($sp)
    ctx->pc = 0x204cbcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x204cc0: 0xc082178  jal         func_2085E0
    ctx->pc = 0x204CC0u;
    SET_GPR_U32(ctx, 31, 0x204CC8u);
    ctx->pc = 0x204CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204CC0u;
    // 0x204cc4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E0u, 0x204CC0u, 0x204CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204CC8u;
label_204cc8:
    // 0x204cc8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x204CC8u;
    {
        const bool branch_taken_0x204cc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x204CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204CC8u;
        // 0x204ccc: 0x8fa201e0  lw          $v0, 0x1E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204cc8) {
            ctx->pc = 0x204D10u;
            goto label_204d10;
        }
    }
    ctx->pc = 0x204CD0u;
    // 0x204cd0: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x204cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x204cd4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x204cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x204cd8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x204cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x204cdc: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x204cdcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x204ce0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x204ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x204ce4: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x204ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x204ce8: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x204ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x204cec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x204cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x204cf0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x204cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x204cf4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x204cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x204cf8: 0x28650008  slti        $a1, $v1, 0x8
    ctx->pc = 0x204cf8u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x204cfc: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x204cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x204d00: 0x14a0003e  bnez        $a1, . + 4 + (0x3E << 2)
    ctx->pc = 0x204D00u;
    {
        const bool branch_taken_0x204d00 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x204D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204D00u;
        // 0x204d04: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204d00) {
            ctx->pc = 0x204DFCu;
            goto label_204dfc;
        }
    }
    ctx->pc = 0x204D08u;
    // 0x204d08: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x204D08u;
    {
        const bool branch_taken_0x204d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204D08u;
        // 0x204d0c: 0x8fa401e8  lw          $a0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204d08) {
            ctx->pc = 0x204DECu;
            goto label_204dec;
        }
    }
    ctx->pc = 0x204D10u;
label_204d10:
    // 0x204d10: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x204d10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x204d14: 0x1a000039  blez        $s0, . + 4 + (0x39 << 2)
    ctx->pc = 0x204D14u;
    {
        const bool branch_taken_0x204d14 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x204D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204D14u;
        // 0x204d18: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x204d14) {
            ctx->pc = 0x204DFCu;
            goto label_204dfc;
        }
    }
    ctx->pc = 0x204D1Cu;
    // 0x204d1c: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x204D1Cu;
    {
        const bool branch_taken_0x204d1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x204D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204D1Cu;
        // 0x204d20: 0x3c160022  lui         $s6, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204d1c) {
            ctx->pc = 0x204D88u;
            goto label_204d88;
        }
    }
    ctx->pc = 0x204D24u;
    // 0x204d24: 0x0  nop
    ctx->pc = 0x204d24u;
    // NOP
label_204d28:
    // 0x204d28: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x204d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x204d2c: 0x26c45190  addiu       $a0, $s6, 0x5190
    ctx->pc = 0x204d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 20880));
    // 0x204d30: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x204d30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x204d34: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x204d34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x204d38: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x204d38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x204d3c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x204d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x204d40: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x204d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x204d44: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x204d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x204d48: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x204d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x204d4c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x204d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x204d50: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x204d50u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x204d54: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x204D54u;
    {
        const bool branch_taken_0x204d54 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x204D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204D54u;
        // 0x204d58: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204d54) {
            ctx->pc = 0x204D70u;
            goto label_204d70;
        }
    }
    ctx->pc = 0x204D5Cu;
    // 0x204d5c: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x204d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x204d60: 0xc080e4c  jal         func_203930
    ctx->pc = 0x204D60u;
    SET_GPR_U32(ctx, 31, 0x204D68u);
    ctx->pc = 0x204D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204D60u;
    // 0x204d64: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203930u, 0x204D60u, 0x204D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204D68u;
label_204d68:
    // 0x204d68: 0x14400083  bnez        $v0, . + 4 + (0x83 << 2)
    ctx->pc = 0x204D68u;
    {
        const bool branch_taken_0x204d68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x204D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204D68u;
        // 0x204d6c: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204d68) {
            ctx->pc = 0x204F78u;
            goto label_204f78;
        }
    }
    ctx->pc = 0x204D70u;
label_204d70:
    // 0x204d70: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x204d70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x204d74: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x204d74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x204d78: 0x1040ffeb  beqz        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x204D78u;
    {
        const bool branch_taken_0x204d78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x204D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204D78u;
        // 0x204d7c: 0x26c25190  addiu       $v0, $s6, 0x5190 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 20880));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204d78) {
            ctx->pc = 0x204D28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_204d28;
        }
    }
    ctx->pc = 0x204D80u;
    // 0x204d80: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x204D80u;
    {
        const bool branch_taken_0x204d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204D80u;
        // 0x204d84: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204d80) {
            ctx->pc = 0x204D90u;
            goto label_204d90;
        }
    }
    ctx->pc = 0x204D88u;
label_204d88:
    // 0x204d88: 0x26c25190  addiu       $v0, $s6, 0x5190
    ctx->pc = 0x204d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 20880));
    // 0x204d8c: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x204d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_204d90:
    // 0x204d90: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x204d90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x204d94: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x204d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x204d98: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x204d98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x204d9c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x204d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x204da0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x204da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x204da4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x204da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x204da8: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x204da8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x204dac: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x204dacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x204db0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x204DB0u;
    {
        const bool branch_taken_0x204db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204DB0u;
        // 0x204db4: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204db0) {
            ctx->pc = 0x204DE0u;
            goto label_204de0;
        }
    }
    ctx->pc = 0x204DB8u;
label_204db8:
    // 0x204db8: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x204db8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x204dbc: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x204dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x204dc0: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x204dc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204dc4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x204dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x204dc8: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x204dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x204dcc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x204dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x204dd0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x204dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x204dd4: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x204dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x204dd8: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x204dd8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x204ddc: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x204ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
label_204de0:
    // 0x204de0: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x204DE0u;
    {
        const bool branch_taken_0x204de0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x204DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204DE0u;
        // 0x204de4: 0x8fa40208  lw          $a0, 0x208($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204de0) {
            ctx->pc = 0x204E00u;
            goto label_204e00;
        }
    }
    ctx->pc = 0x204DE8u;
    // 0x204de8: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x204de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_204dec:
    // 0x204dec: 0xc080e4c  jal         func_203930
    ctx->pc = 0x204DECu;
    SET_GPR_U32(ctx, 31, 0x204DF4u);
    ctx->pc = 0x204DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204DECu;
    // 0x204df0: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203930u, 0x204DECu, 0x204DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204DF4u;
label_204df4:
    // 0x204df4: 0x14400060  bnez        $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x204DF4u;
    {
        const bool branch_taken_0x204df4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x204DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204DF4u;
        // 0x204df8: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204df4) {
            ctx->pc = 0x204F78u;
            goto label_204f78;
        }
    }
    ctx->pc = 0x204DFCu;
label_204dfc:
    // 0x204dfc: 0x8fa40208  lw          $a0, 0x208($sp)
    ctx->pc = 0x204dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
label_204e00:
    // 0x204e00: 0xae3d0000  sw          $sp, 0x0($s1)
    ctx->pc = 0x204e00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 29));
    // 0x204e04: 0xae240004  sw          $a0, 0x4($s1)
    ctx->pc = 0x204e04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
    // 0x204e08: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x204e08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x204e0c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x204e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x204e10: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x204e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x204e14: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x204e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_204e18:
    // 0x204e18: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x204e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x204e1c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x204e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x204e20: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x204e20u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x204e24: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x204e24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
label_204e28:
    // 0x204e28: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x204E28u;
    {
        const bool branch_taken_0x204e28 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x204E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204E28u;
        // 0x204e2c: 0x33c20004  andi        $v0, $fp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x204e28) {
            ctx->pc = 0x204E48u;
            goto label_204e48;
        }
    }
    ctx->pc = 0x204E30u;
    // 0x204e30: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x204e30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_204e34:
    // 0x204e34: 0xc080e4c  jal         func_203930
    ctx->pc = 0x204E34u;
    SET_GPR_U32(ctx, 31, 0x204E3Cu);
    ctx->pc = 0x204E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204E34u;
    // 0x204e38: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203930u, 0x204E34u, 0x204E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204E3Cu;
label_204e3c:
    // 0x204e3c: 0x1440004e  bnez        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x204E3Cu;
    {
        const bool branch_taken_0x204e3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x204E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204E3Cu;
        // 0x204e40: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204e3c) {
            ctx->pc = 0x204F78u;
            goto label_204f78;
        }
    }
    ctx->pc = 0x204E44u;
label_204e44:
    // 0x204e44: 0x33c20004  andi        $v0, $fp, 0x4
    ctx->pc = 0x204e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)4);
label_204e48:
    // 0x204e48: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x204E48u;
    {
        const bool branch_taken_0x204e48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x204E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204E48u;
        // 0x204e4c: 0x8fa501f4  lw          $a1, 0x1F4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204e48) {
            ctx->pc = 0x204F10u;
            goto label_204f10;
        }
    }
    ctx->pc = 0x204E50u;
    // 0x204e50: 0x8fa60210  lw          $a2, 0x210($sp)
    ctx->pc = 0x204e50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x204e54: 0xa68023  subu        $s0, $a1, $a2
    ctx->pc = 0x204e54u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x204e58: 0x1a00002d  blez        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x204E58u;
    {
        const bool branch_taken_0x204e58 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x204E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204E58u;
        // 0x204e5c: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x204e58) {
            ctx->pc = 0x204F10u;
            goto label_204f10;
        }
    }
    ctx->pc = 0x204E60u;
    // 0x204e60: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x204E60u;
    {
        const bool branch_taken_0x204e60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x204E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204E60u;
        // 0x204e64: 0x3c060022  lui         $a2, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204e60) {
            ctx->pc = 0x204ED0u;
            goto label_204ed0;
        }
    }
    ctx->pc = 0x204E68u;
label_204e68:
    // 0x204e68: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x204e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x204e6c: 0x24c45180  addiu       $a0, $a2, 0x5180
    ctx->pc = 0x204e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 20864));
    // 0x204e70: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x204e70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x204e74: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x204e74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x204e78: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x204e78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x204e7c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x204e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x204e80: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x204e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x204e84: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x204e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x204e88: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x204e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x204e8c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x204e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x204e90: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x204e90u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x204e94: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x204E94u;
    {
        const bool branch_taken_0x204e94 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x204E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204E94u;
        // 0x204e98: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204e94) {
            ctx->pc = 0x204EB8u;
            goto label_204eb8;
        }
    }
    ctx->pc = 0x204E9Cu;
    // 0x204e9c: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x204e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x204ea0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x204ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x204ea4: 0xc080e4c  jal         func_203930
    ctx->pc = 0x204EA4u;
    SET_GPR_U32(ctx, 31, 0x204EACu);
    ctx->pc = 0x204EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204EA4u;
    // 0x204ea8: 0x7fa60220  sq          $a2, 0x220($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203930u, 0x204EA4u, 0x204EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204EACu;
label_204eac:
    // 0x204eac: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x204EACu;
    {
        const bool branch_taken_0x204eac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x204EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204EACu;
        // 0x204eb0: 0x7ba60220  lq          $a2, 0x220($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204eac) {
            ctx->pc = 0x204F78u;
            goto label_204f78;
        }
    }
    ctx->pc = 0x204EB4u;
    // 0x204eb4: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x204eb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_204eb8:
    // 0x204eb8: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x204eb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x204ebc: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x204ebcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x204ec0: 0x1040ffe9  beqz        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x204EC0u;
    {
        const bool branch_taken_0x204ec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x204EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204EC0u;
        // 0x204ec4: 0x24c25180  addiu       $v0, $a2, 0x5180 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 20864));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204ec0) {
            ctx->pc = 0x204E68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_204e68;
        }
    }
    ctx->pc = 0x204EC8u;
    // 0x204ec8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x204EC8u;
    {
        const bool branch_taken_0x204ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204EC8u;
        // 0x204ecc: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204ec8) {
            ctx->pc = 0x204ED8u;
            goto label_204ed8;
        }
    }
    ctx->pc = 0x204ED0u;
label_204ed0:
    // 0x204ed0: 0x24c25180  addiu       $v0, $a2, 0x5180
    ctx->pc = 0x204ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 20864));
    // 0x204ed4: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x204ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_204ed8:
    // 0x204ed8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x204ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x204edc: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x204edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x204ee0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x204ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x204ee4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x204ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x204ee8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x204ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x204eec: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x204eecu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x204ef0: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x204ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x204ef4: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x204EF4u;
    {
        const bool branch_taken_0x204ef4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x204EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204EF4u;
        // 0x204ef8: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204ef4) {
            ctx->pc = 0x204F10u;
            goto label_204f10;
        }
    }
    ctx->pc = 0x204EFCu;
    // 0x204efc: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x204efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x204f00: 0xc080e4c  jal         func_203930
    ctx->pc = 0x204F00u;
    SET_GPR_U32(ctx, 31, 0x204F08u);
    ctx->pc = 0x204F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204F00u;
    // 0x204f04: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203930u, 0x204F00u, 0x204F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204F08u;
label_204f08:
    // 0x204f08: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x204F08u;
    {
        const bool branch_taken_0x204f08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x204F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204F08u;
        // 0x204f0c: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204f08) {
            ctx->pc = 0x204F7Cu;
            goto label_204f7c;
        }
    }
    ctx->pc = 0x204F10u;
label_204f10:
    // 0x204f10: 0x8fa30210  lw          $v1, 0x210($sp)
    ctx->pc = 0x204f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x204f14: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x204f14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x204f18: 0x8fa50210  lw          $a1, 0x210($sp)
    ctx->pc = 0x204f18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x204f1c: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x204f1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x204f20: 0x8fa601f0  lw          $a2, 0x1F0($sp)
    ctx->pc = 0x204f20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x204f24: 0xa2200a  movz        $a0, $a1, $v0
    ctx->pc = 0x204f24u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 5));
    // 0x204f28: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x204f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x204f2c: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x204f2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x204f30: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x204F30u;
    {
        const bool branch_taken_0x204f30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x204F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204F30u;
        // 0x204f34: 0xafa601f0  sw          $a2, 0x1F0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204f30) {
            ctx->pc = 0x204F4Cu;
            goto label_204f4c;
        }
    }
    ctx->pc = 0x204F38u;
    // 0x204f38: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x204f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x204f3c: 0xc080e4c  jal         func_203930
    ctx->pc = 0x204F3Cu;
    SET_GPR_U32(ctx, 31, 0x204F44u);
    ctx->pc = 0x204F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204F3Cu;
    // 0x204f40: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203930u, 0x204F3Cu, 0x204F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204F44u;
label_204f44:
    // 0x204f44: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x204F44u;
    {
        const bool branch_taken_0x204f44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x204F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204F44u;
        // 0x204f48: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204f44) {
            ctx->pc = 0x204F7Cu;
            goto label_204f7c;
        }
    }
    ctx->pc = 0x204F4Cu;
label_204f4c:
    // 0x204f4c: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x204f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x204f50: 0x1000fb0d  b           . + 4 + (-0x4F3 << 2)
    ctx->pc = 0x204F50u;
    {
        const bool branch_taken_0x204f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204F50u;
        // 0x204f54: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204f50) {
            ctx->pc = 0x203B88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_203b88;
        }
    }
    ctx->pc = 0x204F58u;
label_204f58:
    // 0x204f58: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x204f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x204f5c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x204F5Cu;
    {
        const bool branch_taken_0x204f5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x204F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204F5Cu;
        // 0x204f60: 0x8fa401e8  lw          $a0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204f5c) {
            ctx->pc = 0x204F74u;
            goto label_204f74;
        }
    }
    ctx->pc = 0x204F64u;
    // 0x204f64: 0xc080e4c  jal         func_203930
    ctx->pc = 0x204F64u;
    SET_GPR_U32(ctx, 31, 0x204F6Cu);
    ctx->pc = 0x204F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204F64u;
    // 0x204f68: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203930u, 0x204F64u, 0x204F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204F6Cu;
label_204f6c:
    // 0x204f6c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x204F6Cu;
    {
        const bool branch_taken_0x204f6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x204F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204F6Cu;
        // 0x204f70: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204f6c) {
            ctx->pc = 0x204F7Cu;
            goto label_204f7c;
        }
    }
    ctx->pc = 0x204F74u;
label_204f74:
    // 0x204f74: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x204f74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_204f78:
    // 0x204f78: 0x8fa201e8  lw          $v0, 0x1E8($sp)
    ctx->pc = 0x204f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_204f7c:
    // 0x204f7c: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x204f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x204f80: 0x9443000c  lhu         $v1, 0xC($v0)
    ctx->pc = 0x204f80u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x204f84: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x204f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x204f88: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x204f88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x204f8c: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x204f8cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_204f90:
    // 0x204f90: 0xdfbf02c0  ld          $ra, 0x2C0($sp)
    ctx->pc = 0x204f90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 704)));
label_204f94:
    // 0x204f94: 0xdfbe02b0  ld          $fp, 0x2B0($sp)
    ctx->pc = 0x204f94u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x204f98: 0xdfb702a0  ld          $s7, 0x2A0($sp)
    ctx->pc = 0x204f98u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x204f9c: 0xdfb60290  ld          $s6, 0x290($sp)
    ctx->pc = 0x204f9cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x204fa0: 0xdfb50280  ld          $s5, 0x280($sp)
    ctx->pc = 0x204fa0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x204fa4: 0xdfb40270  ld          $s4, 0x270($sp)
    ctx->pc = 0x204fa4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x204fa8: 0xdfb30260  ld          $s3, 0x260($sp)
    ctx->pc = 0x204fa8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x204fac: 0xdfb20250  ld          $s2, 0x250($sp)
    ctx->pc = 0x204facu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x204fb0: 0xdfb10240  ld          $s1, 0x240($sp)
    ctx->pc = 0x204fb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x204fb4: 0xdfb00230  ld          $s0, 0x230($sp)
    ctx->pc = 0x204fb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x204fb8: 0x3e00008  jr          $ra
    ctx->pc = 0x204FB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204FB8u;
        // 0x204fbc: 0x27bd02d0  addiu       $sp, $sp, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204FB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x204FC0u;
}
