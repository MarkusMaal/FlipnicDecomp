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

// Function: FUN_0020b1a0
// Address: 0x20b1a0 - 0x20b2f0
void FUN_0020b1a0_0x20b1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0020b1a0_0x20b1a0");
#endif

    switch (ctx->pc) {
        case 0x20b224u: goto label_20b224;
        case 0x20b230u: goto label_20b230;
        case 0x20b260u: goto label_20b260;
        default: break;
    }

    ctx->pc = 0x20b1a0u;

    // 0x20b1a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x20b1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x20b1a4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x20b1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x20b1a8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x20b1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x20b1ac: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x20b1acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x20b1b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20b1b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20b1b4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x20b1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x20b1b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20b1b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b1bc: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x20b1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x20b1c0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x20b1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x20b1c4: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x20b1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x20b1c8: 0x3053007f  andi        $s3, $v0, 0x7F
    ctx->pc = 0x20b1c8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x20b1cc: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x20b1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x20b1d0: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x20b1d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x20b1d4: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x20b1d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x20b1d8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x20b1d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20b1dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20b1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20b1e0: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x20b1e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x20b1e4: 0x829021  addu        $s2, $a0, $v0
    ctx->pc = 0x20b1e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x20b1e8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x20b1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x20b1ec: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x20B1ECu;
    {
        const bool branch_taken_0x20b1ec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B1ECu;
        // 0x20b1f0: 0xa28823  subu        $s1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b1ec) {
            ctx->pc = 0x20B224u;
            goto label_20b224;
        }
    }
    ctx->pc = 0x20B1F4u;
    // 0x20b1f4: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x20b1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x20b1f8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x20B1F8u;
    {
        const bool branch_taken_0x20b1f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B1F8u;
        // 0x20b1fc: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b1f8) {
            ctx->pc = 0x20B224u;
            goto label_20b224;
        }
    }
    ctx->pc = 0x20B200u;
    // 0x20b200: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x20b200u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x20b204: 0x3442b010  ori         $v0, $v0, 0xB010
    ctx->pc = 0x20b204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45072);
    // 0x20b208: 0x3484b020  ori         $a0, $a0, 0xB020
    ctx->pc = 0x20b208u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45088);
    // 0x20b20c: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x20b20cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x20b210: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x20b210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x20b214: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x20b214u;
    runtime->Store32(rdram, ctx, 0x1000B020u, GPR_U32(ctx, 3));
    // 0x20b218: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x20b218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x20b21c: 0xc082bf2  jal         func_20AFC8
    ctx->pc = 0x20B21Cu;
    SET_GPR_U32(ctx, 31, 0x20B224u);
    ctx->pc = 0x20B220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B21Cu;
    // 0x20b220: 0x34840100  ori         $a0, $a0, 0x100 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
    ctx->in_delay_slot = false;
    ctx->pc = 0x20AFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AFC8u, 0x20B21Cu, 0x20B224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B224u;
label_20b224:
    // 0x20b224: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x20b224u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x20b228: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x20b228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x20b22c: 0x0  nop
    ctx->pc = 0x20b22cu;
    // NOP
label_20b230:
    // 0x20b230: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20b230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20b234: 0x0  nop
    ctx->pc = 0x20b234u;
    // NOP
    // 0x20b238: 0x0  nop
    ctx->pc = 0x20b238u;
    // NOP
    // 0x20b23c: 0x0  nop
    ctx->pc = 0x20b23cu;
    // NOP
    // 0x20b240: 0x0  nop
    ctx->pc = 0x20b240u;
    // NOP
    // 0x20b244: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x20B244u;
    {
        const bool branch_taken_0x20b244 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x20b244) {
            ctx->pc = 0x20B230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20b230;
        }
    }
    ctx->pc = 0x20B24Cu;
    // 0x20b24c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x20b24cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x20b250: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x20b250u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x20b254: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x20b254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x20b258: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x20b258u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x20b25c: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x20b25cu;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 19));
label_20b260:
    // 0x20b260: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20b260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20b264: 0x0  nop
    ctx->pc = 0x20b264u;
    // NOP
    // 0x20b268: 0x0  nop
    ctx->pc = 0x20b268u;
    // NOP
    // 0x20b26c: 0x0  nop
    ctx->pc = 0x20b26cu;
    // NOP
    // 0x20b270: 0x0  nop
    ctx->pc = 0x20b270u;
    // NOP
    // 0x20b274: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x20B274u;
    {
        const bool branch_taken_0x20b274 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x20b274) {
            ctx->pc = 0x20B260u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20b260;
        }
    }
    ctx->pc = 0x20B27Cu;
    // 0x20b27c: 0x12200016  beqz        $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x20B27Cu;
    {
        const bool branch_taken_0x20b27c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B27Cu;
        // 0x20b280: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b27c) {
            ctx->pc = 0x20B2D8u;
            goto label_20b2d8;
        }
    }
    ctx->pc = 0x20B284u;
    // 0x20b284: 0x12400015  beqz        $s2, . + 4 + (0x15 << 2)
    ctx->pc = 0x20B284u;
    {
        const bool branch_taken_0x20b284 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B284u;
        // 0x20b288: 0xdfb30030  ld          $s3, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b284) {
            ctx->pc = 0x20B2DCu;
            goto label_20b2dc;
        }
    }
    ctx->pc = 0x20B28Cu;
    // 0x20b28c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x20b28cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x20b290: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x20b290u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x20b294: 0x3442b410  ori         $v0, $v0, 0xB410
    ctx->pc = 0x20b294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46096);
    // 0x20b298: 0x3484b430  ori         $a0, $a0, 0xB430
    ctx->pc = 0x20b298u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46128);
    // 0x20b29c: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x20b29cu;
    runtime->Store32(rdram, ctx, 0x1000B410u, GPR_U32(ctx, 17));
    // 0x20b2a0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x20b2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x20b2a4: 0x3463b420  ori         $v1, $v1, 0xB420
    ctx->pc = 0x20b2a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46112);
    // 0x20b2a8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x20b2a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20b2ac: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x20b2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x20b2b0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x20b2b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20b2b4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x20b2b4u;
    runtime->Store32(rdram, ctx, 0x1000B430u, GPR_U32(ctx, 2));
    // 0x20b2b8: 0xac720000  sw          $s2, 0x0($v1)
    ctx->pc = 0x20b2b8u;
    runtime->Store32(rdram, ctx, 0x1000B420u, GPR_U32(ctx, 18));
    // 0x20b2bc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x20b2bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20b2c0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x20b2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x20b2c4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x20b2c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20b2c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20b2c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20b2cc: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x20b2ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
    // 0x20b2d0: 0x8082c10  j           func_20B040
    ctx->pc = 0x20B2D0u;
    ctx->pc = 0x20B2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B2D0u;
    // 0x20b2d4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B040u;
    FUN_0020b040_0x20b040(rdram, ctx, runtime); return;
    ctx->pc = 0x20B2D8u;
label_20b2d8:
    // 0x20b2d8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x20b2d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_20b2dc:
    // 0x20b2dc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x20b2dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20b2e0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x20b2e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20b2e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20b2e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20b2e8: 0x3e00008  jr          $ra
    ctx->pc = 0x20B2E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20B2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B2E8u;
        // 0x20b2ec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B2E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20B2F0u;
}
