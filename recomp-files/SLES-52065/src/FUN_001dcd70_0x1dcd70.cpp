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

// Function: FUN_001dcd70
// Address: 0x1dcd70 - 0x1dce64
void FUN_001dcd70_0x1dcd70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001dcd70_0x1dcd70");
#endif

    switch (ctx->pc) {
        case 0x1dce28u: goto label_1dce28;
        default: break;
    }

    ctx->pc = 0x1dcd70u;

    // 0x1dcd70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1dcd70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1dcd74: 0x3c0b0038  lui         $t3, 0x38
    ctx->pc = 0x1dcd74u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)56 << 16));
    // 0x1dcd78: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1dcd78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1dcd7c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1dcd7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcd80: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x1dcd80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x1dcd84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dcd84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dcd88: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x1dcd88u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1dcd8c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1dcd8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1dcd90: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1dcd90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1dcd94: 0x2a530018  slti        $s3, $s2, 0x18
    ctx->pc = 0x1dcd94u;
    SET_GPR_U64(ctx, 19, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x1dcd98: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1dcd98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1dcd9c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dcd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dcda0: 0x256b7320  addiu       $t3, $t3, 0x7320
    ctx->pc = 0x1dcda0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 29472));
    // 0x1dcda4: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1dcda4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1dcda8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1dcda8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1dcdac: 0x8d6f0000  lw          $t7, 0x0($t3)
    ctx->pc = 0x1dcdacu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1dcdb0: 0x24637330  addiu       $v1, $v1, 0x7330
    ctx->pc = 0x1dcdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29488));
    // 0x1dcdb4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1dcdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1dcdb8: 0x244a0010  addiu       $t2, $v0, 0x10
    ctx->pc = 0x1dcdb8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1dcdbc: 0x246c0008  addiu       $t4, $v1, 0x8
    ctx->pc = 0x1dcdbcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1dcdc0: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x1dcdc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1dcdc4: 0x4c8821  addu        $s1, $v0, $t4
    ctx->pc = 0x1dcdc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x1dcdc8: 0x1458021  addu        $s0, $t2, $a1
    ctx->pc = 0x1dcdc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x1dcdcc: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x1dcdccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1dcdd0: 0x436821  addu        $t5, $v0, $v1
    ctx->pc = 0x1dcdd0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dcdd4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1dcdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1dcdd8: 0x14c6021  addu        $t4, $t2, $t4
    ctx->pc = 0x1dcdd8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 12)));
    // 0x1dcddc: 0x1435021  addu        $t2, $t2, $v1
    ctx->pc = 0x1dcddcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x1dcde0: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x1dcde0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dcde4: 0x25ee0001  addiu       $t6, $t7, 0x1
    ctx->pc = 0x1dcde4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x1dcde8: 0x3a630001  xori        $v1, $s3, 0x1
    ctx->pc = 0x1dcde8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)1);
    // 0x1dcdec: 0xad6e0000  sw          $t6, 0x0($t3)
    ctx->pc = 0x1dcdecu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 14));
    // 0x1dcdf0: 0xadb80000  sw          $t8, 0x0($t5)
    ctx->pc = 0x1dcdf0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 24));
    // 0x1dcdf4: 0x2585804  sllv        $t3, $t8, $s2
    ctx->pc = 0x1dcdf4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 24), GPR_U32(ctx, 18) & 0x1F));
    // 0x1dcdf8: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x1dcdf8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x1dcdfc: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1dcdfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dce00: 0xac46000c  sw          $a2, 0xC($v0)
    ctx->pc = 0x1dce00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 6));
    // 0x1dce04: 0x2642ffe8  addiu       $v0, $s2, -0x18
    ctx->pc = 0x1dce04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967272));
    // 0x1dce08: 0xad470000  sw          $a3, 0x0($t2)
    ctx->pc = 0x1dce08u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 7));
    // 0x1dce0c: 0xae080000  sw          $t0, 0x0($s0)
    ctx->pc = 0x1dce0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 8));
    // 0x1dce10: 0xad890000  sw          $t1, 0x0($t4)
    ctx->pc = 0x1dce10u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 9));
    // 0x1dce14: 0x16600002  bnez        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x1DCE14u;
    {
        const bool branch_taken_0x1dce14 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCE14u;
        // 0x1dce18: 0xae2f0000  sw          $t7, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dce14) {
            ctx->pc = 0x1DCE20u;
            goto label_1dce20;
        }
    }
    ctx->pc = 0x1DCE1Cu;
    // 0x1dce1c: 0x585804  sllv        $t3, $t8, $v0
    ctx->pc = 0x1dce1cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 24), GPR_U32(ctx, 2) & 0x1F));
label_1dce20:
    // 0x1dce20: 0xc07784c  jal         func_1DE130
    ctx->pc = 0x1DCE20u;
    SET_GPR_U32(ctx, 31, 0x1DCE28u);
    ctx->pc = 0x1DCE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCE20u;
    // 0x1dce24: 0x160282d  daddu       $a1, $t3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE130u, 0x1DCE20u, 0x1DCE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCE28u;
label_1dce28:
    // 0x1dce28: 0x2645ffe8  addiu       $a1, $s2, -0x18
    ctx->pc = 0x1dce28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967272));
    // 0x1dce2c: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DCE2Cu;
    {
        const bool branch_taken_0x1dce2c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCE2Cu;
        // 0x1dce30: 0x3a640001  xori        $a0, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dce2c) {
            ctx->pc = 0x1DCE40u;
            goto label_1dce40;
        }
    }
    ctx->pc = 0x1DCE34u;
    // 0x1dce34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dce34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dce38: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DCE38u;
    {
        const bool branch_taken_0x1dce38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCE38u;
        // 0x1dce3c: 0x2422804  sllv        $a1, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 18) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dce38) {
            ctx->pc = 0x1DCE48u;
            goto label_1dce48;
        }
    }
    ctx->pc = 0x1DCE40u;
label_1dce40:
    // 0x1dce40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dce40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dce44: 0xa22804  sllv        $a1, $v0, $a1
    ctx->pc = 0x1dce44u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
label_1dce48:
    // 0x1dce48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dce48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dce4c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dce4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dce50: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1dce50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dce54: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1dce54u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dce58: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1dce58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dce5c: 0x8077882  j           func_1DE208
    ctx->pc = 0x1DCE5Cu;
    ctx->pc = 0x1DCE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCE5Cu;
    // 0x1dce60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE208u;
    FUN_001de208_0x1de208(rdram, ctx, runtime); return;
    ctx->pc = 0x1DCE64u;
}
