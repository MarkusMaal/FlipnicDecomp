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

// Function: entry_0015dba8
// Address: 0x15dba8 - 0x15dcd8
void entry_0015dba8_0x15dba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015dba8_0x15dba8");
#endif

    ctx->pc = 0x15dba8u;

label_15dba8:
    // 0x15dba8: 0x2891021  addu        $v0, $s4, $t1
    ctx->pc = 0x15dba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 9)));
    // 0x15dbac: 0x24b6021  addu        $t4, $s2, $t3
    ctx->pc = 0x15dbacu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 11)));
    // 0x15dbb0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x15dbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15dbb4: 0x8d840000  lw          $a0, 0x0($t4)
    ctx->pc = 0x15dbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x15dbb8: 0x25220001  addiu       $v0, $t1, 0x1
    ctx->pc = 0x15dbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x15dbbc: 0x2a33821  addu        $a3, $s5, $v1
    ctx->pc = 0x15dbbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x15dbc0: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x15dbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x15dbc4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x15dbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15dbc8: 0x252d0006  addiu       $t5, $t1, 0x6
    ctx->pc = 0x15dbc8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 9), 6));
    // 0x15dbcc: 0x25220002  addiu       $v0, $t1, 0x2
    ctx->pc = 0x15dbccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x15dbd0: 0x2a33021  addu        $a2, $s5, $v1
    ctx->pc = 0x15dbd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x15dbd4: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x15dbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x15dbd8: 0x256b0020  addiu       $t3, $t3, 0x20
    ctx->pc = 0x15dbd8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 32));
    // 0x15dbdc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x15dbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15dbe0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x15dbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x15dbe4: 0x2a32821  addu        $a1, $s5, $v1
    ctx->pc = 0x15dbe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x15dbe8: 0x2641821  addu        $v1, $s3, $a0
    ctx->pc = 0x15dbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x15dbec: 0x25220003  addiu       $v0, $t1, 0x3
    ctx->pc = 0x15dbecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 3));
    // 0x15dbf0: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x15dbf0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15dbf4: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x15dbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x15dbf8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15dbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15dbfc: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x15dbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x15dc00: 0x25220004  addiu       $v0, $t1, 0x4
    ctx->pc = 0x15dc00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x15dc04: 0xace82cd8  sw          $t0, 0x2CD8($a3)
    ctx->pc = 0x15dc04u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 11480), GPR_U32(ctx, 8));
    // 0x15dc08: 0x2821821  addu        $v1, $s4, $v0
    ctx->pc = 0x15dc08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x15dc0c: 0x8d8e0004  lw          $t6, 0x4($t4)
    ctx->pc = 0x15dc0cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x15dc10: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15dc10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15dc14: 0x25220005  addiu       $v0, $t1, 0x5
    ctx->pc = 0x15dc14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 5));
    // 0x15dc18: 0x28d3821  addu        $a3, $s4, $t5
    ctx->pc = 0x15dc18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 13)));
    // 0x15dc1c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x15dc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x15dc20: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x15dc20u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x15dc24: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15dc24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15dc28: 0x2a76821  addu        $t5, $s5, $a3
    ctx->pc = 0x15dc28u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
    // 0x15dc2c: 0x25270007  addiu       $a3, $t1, 0x7
    ctx->pc = 0x15dc2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 7));
    // 0x15dc30: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x15dc30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x15dc34: 0x2873821  addu        $a3, $s4, $a3
    ctx->pc = 0x15dc34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 7)));
    // 0x15dc38: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x15dc38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x15dc3c: 0xe7080  sll         $t6, $t6, 2
    ctx->pc = 0x15dc3cu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x15dc40: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x15dc40u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x15dc44: 0x26e7021  addu        $t6, $s3, $t6
    ctx->pc = 0x15dc44u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 14)));
    // 0x15dc48: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x15dc48u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x15dc4c: 0x8dce0000  lw          $t6, 0x0($t6)
    ctx->pc = 0x15dc4cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x15dc50: 0x2a74021  addu        $t0, $s5, $a3
    ctx->pc = 0x15dc50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
    // 0x15dc54: 0x12a382a  slt         $a3, $t1, $t2
    ctx->pc = 0x15dc54u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x15dc58: 0xacce2cd8  sw          $t6, 0x2CD8($a2)
    ctx->pc = 0x15dc58u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 11480), GPR_U32(ctx, 14));
    // 0x15dc5c: 0x8d860008  lw          $a2, 0x8($t4)
    ctx->pc = 0x15dc5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x15dc60: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x15dc60u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x15dc64: 0x2663021  addu        $a2, $s3, $a2
    ctx->pc = 0x15dc64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x15dc68: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x15dc68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x15dc6c: 0xaca62cd8  sw          $a2, 0x2CD8($a1)
    ctx->pc = 0x15dc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 11480), GPR_U32(ctx, 6));
    // 0x15dc70: 0x8d85000c  lw          $a1, 0xC($t4)
    ctx->pc = 0x15dc70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x15dc74: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x15dc74u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x15dc78: 0x2652821  addu        $a1, $s3, $a1
    ctx->pc = 0x15dc78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x15dc7c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x15dc7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x15dc80: 0xac852cd8  sw          $a1, 0x2CD8($a0)
    ctx->pc = 0x15dc80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 11480), GPR_U32(ctx, 5));
    // 0x15dc84: 0x8d840010  lw          $a0, 0x10($t4)
    ctx->pc = 0x15dc84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 16)));
    // 0x15dc88: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x15dc88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x15dc8c: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x15dc8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x15dc90: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x15dc90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15dc94: 0xac642cd8  sw          $a0, 0x2CD8($v1)
    ctx->pc = 0x15dc94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 11480), GPR_U32(ctx, 4));
    // 0x15dc98: 0x8d830014  lw          $v1, 0x14($t4)
    ctx->pc = 0x15dc98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 20)));
    // 0x15dc9c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15dc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15dca0: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x15dca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x15dca4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x15dca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15dca8: 0xac432cd8  sw          $v1, 0x2CD8($v0)
    ctx->pc = 0x15dca8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 11480), GPR_U32(ctx, 3));
    // 0x15dcac: 0x8d820018  lw          $v0, 0x18($t4)
    ctx->pc = 0x15dcacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 24)));
    // 0x15dcb0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15dcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15dcb4: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x15dcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x15dcb8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15dcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15dcbc: 0xada22cd8  sw          $v0, 0x2CD8($t5)
    ctx->pc = 0x15dcbcu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 11480), GPR_U32(ctx, 2));
    // 0x15dcc0: 0x8d82001c  lw          $v0, 0x1C($t4)
    ctx->pc = 0x15dcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 28)));
    // 0x15dcc4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15dcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15dcc8: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x15dcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x15dccc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15dcccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15dcd0: 0x14e0ffb5  bnez        $a3, . + 4 + (-0x4B << 2)
    ctx->pc = 0x15DCD0u;
    {
        const bool branch_taken_0x15dcd0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x15DCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DCD0u;
        // 0x15dcd4: 0xad022cd8  sw          $v0, 0x2CD8($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 11480), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dcd0) {
            ctx->pc = 0x15DBA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15dba8;
        }
    }
    ctx->pc = 0x15DCD8u;
}
