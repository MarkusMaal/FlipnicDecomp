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

// Function: FUN_001dbb78
// Address: 0x1dbb78 - 0x1dc070
void FUN_001dbb78_0x1dbb78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001dbb78_0x1dbb78");
#endif

    switch (ctx->pc) {
        case 0x1dbc00u: goto label_1dbc00;
        case 0x1dbc38u: goto label_1dbc38;
        case 0x1dbca0u: goto label_1dbca0;
        case 0x1dbd10u: goto label_1dbd10;
        case 0x1dc03cu: goto label_1dc03c;
        default: break;
    }

    ctx->pc = 0x1dbb78u;

    // 0x1dbb78: 0x27bdfdb0  addiu       $sp, $sp, -0x250
    ctx->pc = 0x1dbb78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966704));
    // 0x1dbb7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dbb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dbb80: 0xffb20210  sd          $s2, 0x210($sp)
    ctx->pc = 0x1dbb80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 528), GPR_U64(ctx, 18));
    // 0x1dbb84: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1dbb84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbb88: 0xffb30218  sd          $s3, 0x218($sp)
    ctx->pc = 0x1dbb88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 536), GPR_U64(ctx, 19));
    // 0x1dbb8c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1dbb8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbb90: 0xffb40220  sd          $s4, 0x220($sp)
    ctx->pc = 0x1dbb90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 544), GPR_U64(ctx, 20));
    // 0x1dbb94: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1dbb94u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbb98: 0xffb50228  sd          $s5, 0x228($sp)
    ctx->pc = 0x1dbb98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 552), GPR_U64(ctx, 21));
    // 0x1dbb9c: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x1dbb9cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbba0: 0xffb00200  sd          $s0, 0x200($sp)
    ctx->pc = 0x1dbba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 16));
    // 0x1dbba4: 0xffb10208  sd          $s1, 0x208($sp)
    ctx->pc = 0x1dbba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 520), GPR_U64(ctx, 17));
    // 0x1dbba8: 0xffb60230  sd          $s6, 0x230($sp)
    ctx->pc = 0x1dbba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 560), GPR_U64(ctx, 22));
    // 0x1dbbac: 0xffb70238  sd          $s7, 0x238($sp)
    ctx->pc = 0x1dbbacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 568), GPR_U64(ctx, 23));
    // 0x1dbbb0: 0xffbe0240  sd          $fp, 0x240($sp)
    ctx->pc = 0x1dbbb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 576), GPR_U64(ctx, 30));
    // 0x1dbbb4: 0x1082000e  beq         $a0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1DBBB4u;
    {
        const bool branch_taken_0x1dbbb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DBBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBBB4u;
        // 0x1dbbb8: 0xffbf0248  sd          $ra, 0x248($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 584), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbbb4) {
            ctx->pc = 0x1DBBF0u;
            goto label_1dbbf0;
        }
    }
    ctx->pc = 0x1DBBBCu;
    // 0x1dbbbc: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x1dbbbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1dbbc0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DBBC0u;
    {
        const bool branch_taken_0x1dbbc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dbbc0) {
            ctx->pc = 0x1DBBC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DBBC0u;
            // 0x1dbbc4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DBBD8u;
            goto label_1dbbd8;
        }
    }
    ctx->pc = 0x1DBBC8u;
    // 0x1dbbc8: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DBBC8u;
    {
        const bool branch_taken_0x1dbbc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dbbc8) {
            ctx->pc = 0x1DBBCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DBBC8u;
            // 0x1dbbcc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DBBE8u;
            goto label_1dbbe8;
        }
    }
    ctx->pc = 0x1DBBD0u;
    // 0x1dbbd0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1DBBD0u;
    {
        const bool branch_taken_0x1dbbd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dbbd0) {
            ctx->pc = 0x1DBBF8u;
            goto label_1dbbf8;
        }
    }
    ctx->pc = 0x1DBBD8u;
label_1dbbd8:
    // 0x1dbbd8: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DBBD8u;
    {
        const bool branch_taken_0x1dbbd8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1dbbd8) {
            ctx->pc = 0x1DBBF8u;
            goto label_1dbbf8;
        }
    }
    ctx->pc = 0x1DBBE0u;
    // 0x1dbbe0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1DBBE0u;
    {
        const bool branch_taken_0x1dbbe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBBE0u;
        // 0x1dbbe4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbbe0) {
            ctx->pc = 0x1DBBF4u;
            goto label_1dbbf4;
        }
    }
    ctx->pc = 0x1DBBE8u;
label_1dbbe8:
    // 0x1dbbe8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DBBE8u;
    {
        const bool branch_taken_0x1dbbe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBBE8u;
        // 0x1dbbec: 0x24100018  addiu       $s0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbbe8) {
            ctx->pc = 0x1DBBF8u;
            goto label_1dbbf8;
        }
    }
    ctx->pc = 0x1DBBF0u;
label_1dbbf0:
    // 0x1dbbf0: 0x24110018  addiu       $s1, $zero, 0x18
    ctx->pc = 0x1dbbf0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1dbbf4:
    // 0x1dbbf4: 0x24100030  addiu       $s0, $zero, 0x30
    ctx->pc = 0x1dbbf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1dbbf8:
    // 0x1dbbf8: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x1DBBF8u;
    SET_GPR_U32(ctx, 31, 0x1DBC00u);
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x1DBBF8u, 0x1DBC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBC00u;
label_1dbc00:
    // 0x1dbc00: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1dbc00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbc04: 0xafa20180  sw          $v0, 0x180($sp)
    ctx->pc = 0x1dbc04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 2));
    // 0x1dbc08: 0xb0102a  slt         $v0, $a1, $s0
    ctx->pc = 0x1dbc08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1dbc0c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1DBC0Cu;
    {
        const bool branch_taken_0x1dbc0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBC0Cu;
        // 0x1dbc10: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbc0c) {
            ctx->pc = 0x1DBC78u;
            goto label_1dbc78;
        }
    }
    ctx->pc = 0x1DBC14u;
    // 0x1dbc14: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1dbc14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1dbc18: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1dbc18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbc1c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1dbc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1dbc20: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dbc20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dbc24: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1dbc24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1dbc28: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1dbc28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1dbc2c: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1dbc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1dbc30: 0x24637344  addiu       $v1, $v1, 0x7344
    ctx->pc = 0x1dbc30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29508));
    // 0x1dbc34: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1dbc34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1dbc38:
    // 0x1dbc38: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x1dbc38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
    // 0x1dbc3c: 0x5454000b  bnel        $v0, $s4, . + 4 + (0xB << 2)
    ctx->pc = 0x1DBC3Cu;
    {
        const bool branch_taken_0x1dbc3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x1dbc3c) {
            ctx->pc = 0x1DBC40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DBC3Cu;
            // 0x1dbc40: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DBC6Cu;
            goto label_1dbc6c;
        }
    }
    ctx->pc = 0x1DBC44u;
    // 0x1dbc44: 0x8c62fff8  lw          $v0, -0x8($v1)
    ctx->pc = 0x1dbc44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967288)));
    // 0x1dbc48: 0x54530008  bnel        $v0, $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DBC48u;
    {
        const bool branch_taken_0x1dbc48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x1dbc48) {
            ctx->pc = 0x1DBC4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DBC48u;
            // 0x1dbc4c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DBC6Cu;
            goto label_1dbc6c;
        }
    }
    ctx->pc = 0x1DBC50u;
    // 0x1dbc50: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1dbc50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dbc54: 0x54520005  bnel        $v0, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DBC54u;
    {
        const bool branch_taken_0x1dbc54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x1dbc54) {
            ctx->pc = 0x1DBC58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DBC54u;
            // 0x1dbc58: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DBC6Cu;
            goto label_1dbc6c;
        }
    }
    ctx->pc = 0x1DBC5Cu;
    // 0x1dbc5c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1dbc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1dbc60: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1dbc60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1dbc64: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1dbc64u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1dbc68: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1dbc68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1dbc6c:
    // 0x1dbc6c: 0xb0102a  slt         $v0, $a1, $s0
    ctx->pc = 0x1dbc6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1dbc70: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1DBC70u;
    {
        const bool branch_taken_0x1dbc70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DBC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBC70u;
        // 0x1dbc74: 0x246300e8  addiu       $v1, $v1, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbc70) {
            ctx->pc = 0x1DBC38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dbc38;
        }
    }
    ctx->pc = 0x1DBC78u;
label_1dbc78:
    // 0x1dbc78: 0x112000f1  beqz        $t1, . + 4 + (0xF1 << 2)
    ctx->pc = 0x1DBC78u;
    {
        const bool branch_taken_0x1dbc78 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBC78u;
        // 0x1dbc7c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbc78) {
            ctx->pc = 0x1DC040u;
            goto label_1dc040;
        }
    }
    ctx->pc = 0x1DBC80u;
    // 0x1dbc80: 0x19200016  blez        $t1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1DBC80u;
    {
        const bool branch_taken_0x1dbc80 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x1DBC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBC80u;
        // 0x1dbc84: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbc80) {
            ctx->pc = 0x1DBCDCu;
            goto label_1dbcdc;
        }
    }
    ctx->pc = 0x1DBC88u;
    // 0x1dbc88: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1dbc88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1dbc8c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1dbc8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbc90: 0x244a7334  addiu       $t2, $v0, 0x7334
    ctx->pc = 0x1dbc90u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 29492));
    // 0x1dbc94: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x1dbc94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1dbc98: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x1dbc98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbc9c: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x1dbc9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1dbca0:
    // 0x1dbca0: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x1dbca0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1dbca4: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1dbca4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1dbca8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dbca8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dbcac: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1dbcacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1dbcb0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1dbcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1dbcb4: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x1dbcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1dbcb8: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x1dbcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1dbcbc: 0x14750004  bne         $v1, $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DBCBCu;
    {
        const bool branch_taken_0x1dbcbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 21));
        ctx->pc = 0x1DBCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBCBCu;
        // 0x1dbcc0: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbcbc) {
            ctx->pc = 0x1DBCD0u;
            goto label_1dbcd0;
        }
    }
    ctx->pc = 0x1DBCC4u;
    // 0x1dbcc4: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x1dbcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x1dbcc8: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1dbcc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1dbccc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1dbcccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1dbcd0:
    // 0x1dbcd0: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1dbcd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1dbcd4: 0x54a0fff2  bnel        $a1, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x1DBCD4u;
    {
        const bool branch_taken_0x1dbcd4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dbcd4) {
            ctx->pc = 0x1DBCD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DBCD4u;
            // 0x1dbcd8: 0x8ce40000  lw          $a0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DBCA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dbca0;
        }
    }
    ctx->pc = 0x1DBCDCu;
label_1dbcdc:
    // 0x1dbcdc: 0x5d000003  bgtzl       $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DBCDCu;
    {
        const bool branch_taken_0x1dbcdc = (GPR_S32(ctx, 8) > 0);
        if (branch_taken_0x1dbcdc) {
            ctx->pc = 0x1DBCE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DBCDCu;
            // 0x1dbce0: 0x27a300c0  addiu       $v1, $sp, 0xC0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DBCECu;
            goto label_1dbcec;
        }
    }
    ctx->pc = 0x1DBCE4u;
    // 0x1dbce4: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x1dbce4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbce8: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x1dbce8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1dbcec:
    // 0x1dbcec: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1dbcecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1dbcf0: 0x241effff  addiu       $fp, $zero, -0x1
    ctx->pc = 0x1dbcf0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dbcf4: 0x19000015  blez        $t0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1DBCF4u;
    {
        const bool branch_taken_0x1dbcf4 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x1DBCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBCF4u;
        // 0x1dbcf8: 0x8c477320  lw          $a3, 0x7320($v0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29472)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbcf4) {
            ctx->pc = 0x1DBD4Cu;
            goto label_1dbd4c;
        }
    }
    ctx->pc = 0x1DBCFCu;
    // 0x1dbcfc: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1dbcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1dbd00: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1dbd00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbd04: 0x24497338  addiu       $t1, $v0, 0x7338
    ctx->pc = 0x1dbd04u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 29496));
    // 0x1dbd08: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x1dbd08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbd0c: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x1dbd0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1dbd10:
    // 0x1dbd10: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x1dbd10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1dbd14: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1dbd14u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1dbd18: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dbd18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dbd1c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1dbd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1dbd20: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1dbd20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1dbd24: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x1dbd24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1dbd28: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1dbd28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dbd2c: 0x47182b  sltu        $v1, $v0, $a3
    ctx->pc = 0x1dbd2cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1dbd30: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DBD30u;
    {
        const bool branch_taken_0x1dbd30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBD30u;
        // 0x1dbd34: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbd30) {
            ctx->pc = 0x1DBD40u;
            goto label_1dbd40;
        }
    }
    ctx->pc = 0x1DBD38u;
    // 0x1dbd38: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1dbd38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbd3c: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x1dbd3cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1dbd40:
    // 0x1dbd40: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1dbd40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1dbd44: 0x54a0fff2  bnel        $a1, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x1DBD44u;
    {
        const bool branch_taken_0x1dbd44 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dbd44) {
            ctx->pc = 0x1DBD48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DBD44u;
            // 0x1dbd48: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DBD10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dbd10;
        }
    }
    ctx->pc = 0x1DBD4Cu;
label_1dbd4c:
    // 0x1dbd4c: 0x7c000b6  bltz        $fp, . + 4 + (0xB6 << 2)
    ctx->pc = 0x1DBD4Cu;
    {
        const bool branch_taken_0x1dbd4c = (GPR_S32(ctx, 30) < 0);
        ctx->pc = 0x1DBD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBD4Cu;
        // 0x1dbd50: 0x1e10c0  sll         $v0, $fp, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbd4c) {
            ctx->pc = 0x1DC028u;
            goto label_1dc028;
        }
    }
    ctx->pc = 0x1DBD54u;
    // 0x1dbd54: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1dbd54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1dbd58: 0x5e1023  subu        $v0, $v0, $fp
    ctx->pc = 0x1dbd58u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x1dbd5c: 0x3c0b0038  lui         $t3, 0x38
    ctx->pc = 0x1dbd5cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)56 << 16));
    // 0x1dbd60: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dbd60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dbd64: 0x24637330  addiu       $v1, $v1, 0x7330
    ctx->pc = 0x1dbd64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29488));
    // 0x1dbd68: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x1dbd68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x1dbd6c: 0x256b7344  addiu       $t3, $t3, 0x7344
    ctx->pc = 0x1dbd6cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 29508));
    // 0x1dbd70: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1dbd70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1dbd74: 0x2464000c  addiu       $a0, $v1, 0xC
    ctx->pc = 0x1dbd74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x1dbd78: 0x244a00b0  addiu       $t2, $v0, 0xB0
    ctx->pc = 0x1dbd78u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x1dbd7c: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x1dbd7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1dbd80: 0x14b5821  addu        $t3, $t2, $t3
    ctx->pc = 0x1dbd80u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x1dbd84: 0x24500010  addiu       $s0, $v0, 0x10
    ctx->pc = 0x1dbd84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1dbd88: 0xafab01dc  sw          $t3, 0x1DC($sp)
    ctx->pc = 0x1dbd88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 476), GPR_U32(ctx, 11));
    // 0x1dbd8c: 0x445821  addu        $t3, $v0, $a0
    ctx->pc = 0x1dbd8cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1dbd90: 0xafab01e0  sw          $t3, 0x1E0($sp)
    ctx->pc = 0x1dbd90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 11));
    // 0x1dbd94: 0x2055821  addu        $t3, $s0, $a1
    ctx->pc = 0x1dbd94u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x1dbd98: 0x244c0040  addiu       $t4, $v0, 0x40
    ctx->pc = 0x1dbd98u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1dbd9c: 0xafab01e4  sw          $t3, 0x1E4($sp)
    ctx->pc = 0x1dbd9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 484), GPR_U32(ctx, 11));
    // 0x1dbda0: 0x24510030  addiu       $s1, $v0, 0x30
    ctx->pc = 0x1dbda0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1dbda4: 0x1845821  addu        $t3, $t4, $a0
    ctx->pc = 0x1dbda4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
    // 0x1dbda8: 0xafab01a0  sw          $t3, 0x1A0($sp)
    ctx->pc = 0x1dbda8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 11));
    // 0x1dbdac: 0x2235821  addu        $t3, $s1, $v1
    ctx->pc = 0x1dbdacu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1dbdb0: 0x244f0050  addiu       $t7, $v0, 0x50
    ctx->pc = 0x1dbdb0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x1dbdb4: 0xafab01a8  sw          $t3, 0x1A8($sp)
    ctx->pc = 0x1dbdb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 11));
    // 0x1dbdb8: 0x244d0080  addiu       $t5, $v0, 0x80
    ctx->pc = 0x1dbdb8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1dbdbc: 0x1e45821  addu        $t3, $t7, $a0
    ctx->pc = 0x1dbdbcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 4)));
    // 0x1dbdc0: 0xafab01ac  sw          $t3, 0x1AC($sp)
    ctx->pc = 0x1dbdc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 11));
    // 0x1dbdc4: 0x1a35821  addu        $t3, $t5, $v1
    ctx->pc = 0x1dbdc4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
    // 0x1dbdc8: 0x244e00a0  addiu       $t6, $v0, 0xA0
    ctx->pc = 0x1dbdc8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x1dbdcc: 0x24670008  addiu       $a3, $v1, 0x8
    ctx->pc = 0x1dbdccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1dbdd0: 0xafab01b4  sw          $t3, 0x1B4($sp)
    ctx->pc = 0x1dbdd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 436), GPR_U32(ctx, 11));
    // 0x1dbdd4: 0x1c45821  addu        $t3, $t6, $a0
    ctx->pc = 0x1dbdd4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 4)));
    // 0x1dbdd8: 0x24480090  addiu       $t0, $v0, 0x90
    ctx->pc = 0x1dbdd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x1dbddc: 0xafab01bc  sw          $t3, 0x1BC($sp)
    ctx->pc = 0x1dbddcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 444), GPR_U32(ctx, 11));
    // 0x1dbde0: 0x24550060  addiu       $s5, $v0, 0x60
    ctx->pc = 0x1dbde0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1dbde4: 0x1075821  addu        $t3, $t0, $a3
    ctx->pc = 0x1dbde4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x1dbde8: 0xafab01c0  sw          $t3, 0x1C0($sp)
    ctx->pc = 0x1dbde8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 11));
    // 0x1dbdec: 0x2a45821  addu        $t3, $s5, $a0
    ctx->pc = 0x1dbdecu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x1dbdf0: 0x24530070  addiu       $s3, $v0, 0x70
    ctx->pc = 0x1dbdf0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x1dbdf4: 0xafab01c4  sw          $t3, 0x1C4($sp)
    ctx->pc = 0x1dbdf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 452), GPR_U32(ctx, 11));
    // 0x1dbdf8: 0x245200d0  addiu       $s2, $v0, 0xD0
    ctx->pc = 0x1dbdf8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x1dbdfc: 0x24660010  addiu       $a2, $v1, 0x10
    ctx->pc = 0x1dbdfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1dbe00: 0x2635821  addu        $t3, $s3, $v1
    ctx->pc = 0x1dbe00u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1dbe04: 0x43b821  addu        $s7, $v0, $v1
    ctx->pc = 0x1dbe04u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dbe08: 0xafab01c8  sw          $t3, 0x1C8($sp)
    ctx->pc = 0x1dbe08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 456), GPR_U32(ctx, 11));
    // 0x1dbe0c: 0x2465821  addu        $t3, $s2, $a2
    ctx->pc = 0x1dbe0cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x1dbe10: 0xafab01d0  sw          $t3, 0x1D0($sp)
    ctx->pc = 0x1dbe10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 11));
    // 0x1dbe14: 0x435821  addu        $t3, $v0, $v1
    ctx->pc = 0x1dbe14u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dbe18: 0xafab0184  sw          $t3, 0x184($sp)
    ctx->pc = 0x1dbe18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 11));
    // 0x1dbe1c: 0x455821  addu        $t3, $v0, $a1
    ctx->pc = 0x1dbe1cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1dbe20: 0xafab0188  sw          $t3, 0x188($sp)
    ctx->pc = 0x1dbe20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 11));
    // 0x1dbe24: 0x2075821  addu        $t3, $s0, $a3
    ctx->pc = 0x1dbe24u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x1dbe28: 0xafab018c  sw          $t3, 0x18C($sp)
    ctx->pc = 0x1dbe28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 11));
    // 0x1dbe2c: 0x1045821  addu        $t3, $t0, $a0
    ctx->pc = 0x1dbe2cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x1dbe30: 0xafab01b8  sw          $t3, 0x1B8($sp)
    ctx->pc = 0x1dbe30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 440), GPR_U32(ctx, 11));
    // 0x1dbe34: 0x2275821  addu        $t3, $s1, $a3
    ctx->pc = 0x1dbe34u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x1dbe38: 0xafab0190  sw          $t3, 0x190($sp)
    ctx->pc = 0x1dbe38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 11));
    // 0x1dbe3c: 0x2245821  addu        $t3, $s1, $a0
    ctx->pc = 0x1dbe3cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x1dbe40: 0xafab0194  sw          $t3, 0x194($sp)
    ctx->pc = 0x1dbe40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 11));
    // 0x1dbe44: 0x1855821  addu        $t3, $t4, $a1
    ctx->pc = 0x1dbe44u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x1dbe48: 0xafab0198  sw          $t3, 0x198($sp)
    ctx->pc = 0x1dbe48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 11));
    // 0x1dbe4c: 0x1e35821  addu        $t3, $t7, $v1
    ctx->pc = 0x1dbe4cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 3)));
    // 0x1dbe50: 0x183c021  addu        $t8, $t4, $v1
    ctx->pc = 0x1dbe50u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x1dbe54: 0x1876021  addu        $t4, $t4, $a3
    ctx->pc = 0x1dbe54u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 7)));
    // 0x1dbe58: 0x2a3a821  addu        $s5, $s5, $v1
    ctx->pc = 0x1dbe58u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1dbe5c: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x1dbe5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1dbe60: 0xafa301f0  sw          $v1, 0x1F0($sp)
    ctx->pc = 0x1dbe60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 3));
    // 0x1dbe64: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1dbe64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1dbe68: 0xafab019c  sw          $t3, 0x19C($sp)
    ctx->pc = 0x1dbe68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 11));
    // 0x1dbe6c: 0x2655821  addu        $t3, $s3, $a1
    ctx->pc = 0x1dbe6cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x1dbe70: 0x47c821  addu        $t9, $v0, $a3
    ctx->pc = 0x1dbe70u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1dbe74: 0xafab01a4  sw          $t3, 0x1A4($sp)
    ctx->pc = 0x1dbe74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 11));
    // 0x1dbe78: 0x24637344  addiu       $v1, $v1, 0x7344
    ctx->pc = 0x1dbe78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29508));
    // 0x1dbe7c: 0x320582d  daddu       $t3, $t9, $zero
    ctx->pc = 0x1dbe7cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbe80: 0xafab01b0  sw          $t3, 0x1B0($sp)
    ctx->pc = 0x1dbe80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 11));
    // 0x1dbe84: 0x1055821  addu        $t3, $t0, $a1
    ctx->pc = 0x1dbe84u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x1dbe88: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x1dbe88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1dbe8c: 0x2451821  addu        $v1, $s2, $a1
    ctx->pc = 0x1dbe8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x1dbe90: 0xafa301cc  sw          $v1, 0x1CC($sp)
    ctx->pc = 0x1dbe90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 460), GPR_U32(ctx, 3));
    // 0x1dbe94: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1dbe94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1dbe98: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x1dbe98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1dbe9c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1dbe9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1dbea0: 0x1e5b021  addu        $s6, $t7, $a1
    ctx->pc = 0x1dbea0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 5)));
    // 0x1dbea4: 0x1e77821  addu        $t7, $t7, $a3
    ctx->pc = 0x1dbea4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 7)));
    // 0x1dbea8: 0x2258821  addu        $s1, $s1, $a1
    ctx->pc = 0x1dbea8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x1dbeac: 0x8fa501f0  lw          $a1, 0x1F0($sp)
    ctx->pc = 0x1dbeacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x1dbeb0: 0x3c090022  lui         $t1, 0x22
    ctx->pc = 0x1dbeb0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)34 << 16));
    // 0x1dbeb4: 0x1475021  addu        $t2, $t2, $a3
    ctx->pc = 0x1dbeb4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x1dbeb8: 0x2529a000  addiu       $t1, $t1, -0x6000
    ctx->pc = 0x1dbeb8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294942720));
    // 0x1dbebc: 0x2463a03c  addiu       $v1, $v1, -0x5FC4
    ctx->pc = 0x1dbebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942780));
    // 0x1dbec0: 0x1a46821  addu        $t5, $t5, $a0
    ctx->pc = 0x1dbec0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 4)));
    // 0x1dbec4: 0x1c77021  addu        $t6, $t6, $a3
    ctx->pc = 0x1dbec4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 7)));
    // 0x1dbec8: 0xafaa01d4  sw          $t2, 0x1D4($sp)
    ctx->pc = 0x1dbec8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 468), GPR_U32(ctx, 10));
    // 0x1dbecc: 0x240a007f  addiu       $t2, $zero, 0x7F
    ctx->pc = 0x1dbeccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x1dbed0: 0xafa601d8  sw          $a2, 0x1D8($sp)
    ctx->pc = 0x1dbed0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 6));
    // 0x1dbed4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1dbed4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dbed8: 0xaca90000  sw          $t1, 0x0($a1)
    ctx->pc = 0x1dbed8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 9));
    // 0x1dbedc: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x1dbedcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x1dbee0: 0xada90000  sw          $t1, 0x0($t5)
    ctx->pc = 0x1dbee0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 9));
    // 0x1dbee4: 0x24140040  addiu       $s4, $zero, 0x40
    ctx->pc = 0x1dbee4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1dbee8: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x1dbee8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x1dbeec: 0x2679821  addu        $s3, $s3, $a3
    ctx->pc = 0x1dbeecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 7)));
    // 0x1dbef0: 0xadc90000  sw          $t1, 0x0($t6)
    ctx->pc = 0x1dbef0u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 9));
    // 0x1dbef4: 0x2473821  addu        $a3, $s2, $a3
    ctx->pc = 0x1dbef4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x1dbef8: 0xad090000  sw          $t1, 0x0($t0)
    ctx->pc = 0x1dbef8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 9));
    // 0x1dbefc: 0x2449021  addu        $s2, $s2, $a0
    ctx->pc = 0x1dbefcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x1dbf00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dbf00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dbf04: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1dbf04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1dbf08: 0x8fa501bc  lw          $a1, 0x1BC($sp)
    ctx->pc = 0x1dbf08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
    // 0x1dbf0c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1dbf0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1dbf10: 0x8fab0184  lw          $t3, 0x184($sp)
    ctx->pc = 0x1dbf10u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
    // 0x1dbf14: 0xad600000  sw          $zero, 0x0($t3)
    ctx->pc = 0x1dbf14u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 0));
    // 0x1dbf18: 0xaf200000  sw          $zero, 0x0($t9)
    ctx->pc = 0x1dbf18u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 0));
    // 0x1dbf1c: 0x8fa30188  lw          $v1, 0x188($sp)
    ctx->pc = 0x1dbf1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1dbf20: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1dbf20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1dbf24: 0xaee00020  sw          $zero, 0x20($s7)
    ctx->pc = 0x1dbf24u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 32), GPR_U32(ctx, 0));
    // 0x1dbf28: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x1dbf28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x1dbf2c: 0x8fa5018c  lw          $a1, 0x18C($sp)
    ctx->pc = 0x1dbf2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x1dbf30: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x1dbf30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x1dbf34: 0xaf0a0000  sw          $t2, 0x0($t8)
    ctx->pc = 0x1dbf34u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 10));
    // 0x1dbf38: 0x8fab0194  lw          $t3, 0x194($sp)
    ctx->pc = 0x1dbf38u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
    // 0x1dbf3c: 0xad6a0000  sw          $t2, 0x0($t3)
    ctx->pc = 0x1dbf3cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 10));
    // 0x1dbf40: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x1dbf40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1dbf44: 0xac6a0000  sw          $t2, 0x0($v1)
    ctx->pc = 0x1dbf44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 10));
    // 0x1dbf48: 0xad8a0000  sw          $t2, 0x0($t4)
    ctx->pc = 0x1dbf48u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 10));
    // 0x1dbf4c: 0x8fa50198  lw          $a1, 0x198($sp)
    ctx->pc = 0x1dbf4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1dbf50: 0xacaa0000  sw          $t2, 0x0($a1)
    ctx->pc = 0x1dbf50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 10));
    // 0x1dbf54: 0xaed40000  sw          $s4, 0x0($s6)
    ctx->pc = 0x1dbf54u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 20));
    // 0x1dbf58: 0x8fab019c  lw          $t3, 0x19C($sp)
    ctx->pc = 0x1dbf58u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x1dbf5c: 0xad740000  sw          $s4, 0x0($t3)
    ctx->pc = 0x1dbf5cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 20));
    // 0x1dbf60: 0x240b1000  addiu       $t3, $zero, 0x1000
    ctx->pc = 0x1dbf60u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1dbf64: 0xade60000  sw          $a2, 0x0($t7)
    ctx->pc = 0x1dbf64u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 6));
    // 0x1dbf68: 0x8fa301a0  lw          $v1, 0x1A0($sp)
    ctx->pc = 0x1dbf68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1dbf6c: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x1dbf6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x1dbf70: 0x8fa501a4  lw          $a1, 0x1A4($sp)
    ctx->pc = 0x1dbf70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
    // 0x1dbf74: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x1dbf74u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
    // 0x1dbf78: 0xae2b0000  sw          $t3, 0x0($s1)
    ctx->pc = 0x1dbf78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 11));
    // 0x1dbf7c: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x1dbf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1dbf80: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1dbf80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1dbf84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1dbf84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dbf88: 0x8fa501ac  lw          $a1, 0x1AC($sp)
    ctx->pc = 0x1dbf88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 428)));
    // 0x1dbf8c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1dbf8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1dbf90: 0xaeb40000  sw          $s4, 0x0($s5)
    ctx->pc = 0x1dbf90u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 20));
    // 0x1dbf94: 0x8fab01b0  lw          $t3, 0x1B0($sp)
    ctx->pc = 0x1dbf94u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1dbf98: 0xad630074  sw          $v1, 0x74($t3)
    ctx->pc = 0x1dbf98u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 116), GPR_U32(ctx, 3));
    // 0x1dbf9c: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1dbf9cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x1dbfa0: 0x8fa501b8  lw          $a1, 0x1B8($sp)
    ctx->pc = 0x1dbfa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x1dbfa4: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1dbfa4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1dbfa8: 0x8fab01b4  lw          $t3, 0x1B4($sp)
    ctx->pc = 0x1dbfa8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
    // 0x1dbfac: 0xad600000  sw          $zero, 0x0($t3)
    ctx->pc = 0x1dbfacu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 0));
    // 0x1dbfb0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1dbfb0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1dbfb4: 0x8fa301c0  lw          $v1, 0x1C0($sp)
    ctx->pc = 0x1dbfb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1dbfb8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1dbfb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1dbfbc: 0x8fa501c8  lw          $a1, 0x1C8($sp)
    ctx->pc = 0x1dbfbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
    // 0x1dbfc0: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x1dbfc0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x1dbfc4: 0x8fab01c4  lw          $t3, 0x1C4($sp)
    ctx->pc = 0x1dbfc4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
    // 0x1dbfc8: 0xe44000e0  swc1        $f0, 0xE0($v0)
    ctx->pc = 0x1dbfc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 224), bits); }
    // 0x1dbfcc: 0xad660000  sw          $a2, 0x0($t3)
    ctx->pc = 0x1dbfccu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 6));
    // 0x1dbfd0: 0xae460000  sw          $a2, 0x0($s2)
    ctx->pc = 0x1dbfd0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 6));
    // 0x1dbfd4: 0xace60000  sw          $a2, 0x0($a3)
    ctx->pc = 0x1dbfd4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
    // 0x1dbfd8: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x1dbfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x1dbfdc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1dbfdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1dbfe0: 0x8fa301cc  lw          $v1, 0x1CC($sp)
    ctx->pc = 0x1dbfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 460)));
    // 0x1dbfe4: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x1dbfe4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x1dbfe8: 0x8fa501dc  lw          $a1, 0x1DC($sp)
    ctx->pc = 0x1dbfe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x1dbfec: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x1dbfecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x1dbff0: 0x8fab0184  lw          $t3, 0x184($sp)
    ctx->pc = 0x1dbff0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
    // 0x1dbff4: 0xad600000  sw          $zero, 0x0($t3)
    ctx->pc = 0x1dbff4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 0));
    // 0x1dbff8: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x1dbff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1dbffc: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1dbffcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1dc000: 0x8fa301d8  lw          $v1, 0x1D8($sp)
    ctx->pc = 0x1dc000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x1dc004: 0xe46000c0  swc1        $f0, 0xC0($v1)
    ctx->pc = 0x1dc004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 192), bits); }
    // 0x1dc008: 0x8fa501d4  lw          $a1, 0x1D4($sp)
    ctx->pc = 0x1dc008u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
    // 0x1dc00c: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x1dc00cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x1dc010: 0x8fab018c  lw          $t3, 0x18C($sp)
    ctx->pc = 0x1dc010u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x1dc014: 0xad660000  sw          $a2, 0x0($t3)
    ctx->pc = 0x1dc014u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 6));
    // 0x1dc018: 0x8fa201e4  lw          $v0, 0x1E4($sp)
    ctx->pc = 0x1dc018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
    // 0x1dc01c: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x1dc01cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x1dc020: 0x8fa301e0  lw          $v1, 0x1E0($sp)
    ctx->pc = 0x1dc020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1dc024: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x1dc024u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
label_1dc028:
    // 0x1dc028: 0x8fa50180  lw          $a1, 0x180($sp)
    ctx->pc = 0x1dc028u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1dc02c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DC02Cu;
    {
        const bool branch_taken_0x1dc02c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC02Cu;
        // 0x1dc030: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc02c) {
            ctx->pc = 0x1DC040u;
            goto label_1dc040;
        }
    }
    ctx->pc = 0x1DC034u;
    // 0x1dc034: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x1DC034u;
    SET_GPR_U32(ctx, 31, 0x1DC03Cu);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x1DC034u, 0x1DC03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC03Cu;
label_1dc03c:
    // 0x1dc03c: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x1dc03cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1dc040:
    // 0x1dc040: 0xdfb00200  ld          $s0, 0x200($sp)
    ctx->pc = 0x1dc040u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x1dc044: 0xdfb10208  ld          $s1, 0x208($sp)
    ctx->pc = 0x1dc044u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x1dc048: 0xdfb20210  ld          $s2, 0x210($sp)
    ctx->pc = 0x1dc048u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x1dc04c: 0xdfb30218  ld          $s3, 0x218($sp)
    ctx->pc = 0x1dc04cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x1dc050: 0xdfb40220  ld          $s4, 0x220($sp)
    ctx->pc = 0x1dc050u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x1dc054: 0xdfb50228  ld          $s5, 0x228($sp)
    ctx->pc = 0x1dc054u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 552)));
    // 0x1dc058: 0xdfb60230  ld          $s6, 0x230($sp)
    ctx->pc = 0x1dc058u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x1dc05c: 0xdfb70238  ld          $s7, 0x238($sp)
    ctx->pc = 0x1dc05cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 568)));
    // 0x1dc060: 0xdfbe0240  ld          $fp, 0x240($sp)
    ctx->pc = 0x1dc060u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x1dc064: 0xdfbf0248  ld          $ra, 0x248($sp)
    ctx->pc = 0x1dc064u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x1dc068: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC068u;
        // 0x1dc06c: 0x27bd0250  addiu       $sp, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DC070u;
}
