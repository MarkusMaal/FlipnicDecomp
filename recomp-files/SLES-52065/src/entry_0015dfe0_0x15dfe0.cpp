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

// Function: entry_0015dfe0
// Address: 0x15dfe0 - 0x15e110
void entry_0015dfe0_0x15dfe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015dfe0_0x15dfe0");
#endif

    ctx->pc = 0x15dfe0u;

label_15dfe0:
    // 0x15dfe0: 0x2891021  addu        $v0, $s4, $t1
    ctx->pc = 0x15dfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 9)));
    // 0x15dfe4: 0x24b6021  addu        $t4, $s2, $t3
    ctx->pc = 0x15dfe4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 11)));
    // 0x15dfe8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x15dfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15dfec: 0x8d840000  lw          $a0, 0x0($t4)
    ctx->pc = 0x15dfecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x15dff0: 0x25220001  addiu       $v0, $t1, 0x1
    ctx->pc = 0x15dff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x15dff4: 0x2a33821  addu        $a3, $s5, $v1
    ctx->pc = 0x15dff4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x15dff8: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x15dff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x15dffc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x15dffcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15e000: 0x252d0006  addiu       $t5, $t1, 0x6
    ctx->pc = 0x15e000u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 9), 6));
    // 0x15e004: 0x25220002  addiu       $v0, $t1, 0x2
    ctx->pc = 0x15e004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x15e008: 0x2a33021  addu        $a2, $s5, $v1
    ctx->pc = 0x15e008u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x15e00c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x15e00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x15e010: 0x256b0020  addiu       $t3, $t3, 0x20
    ctx->pc = 0x15e010u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 32));
    // 0x15e014: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x15e014u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15e018: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x15e018u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x15e01c: 0x2a32821  addu        $a1, $s5, $v1
    ctx->pc = 0x15e01cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x15e020: 0x2641821  addu        $v1, $s3, $a0
    ctx->pc = 0x15e020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x15e024: 0x25220003  addiu       $v0, $t1, 0x3
    ctx->pc = 0x15e024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 3));
    // 0x15e028: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x15e028u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15e02c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x15e02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x15e030: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15e030u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15e034: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x15e034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x15e038: 0x25220004  addiu       $v0, $t1, 0x4
    ctx->pc = 0x15e038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x15e03c: 0xace82cd8  sw          $t0, 0x2CD8($a3)
    ctx->pc = 0x15e03cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 11480), GPR_U32(ctx, 8));
    // 0x15e040: 0x2821821  addu        $v1, $s4, $v0
    ctx->pc = 0x15e040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x15e044: 0x8d8e0004  lw          $t6, 0x4($t4)
    ctx->pc = 0x15e044u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x15e048: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15e048u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15e04c: 0x25220005  addiu       $v0, $t1, 0x5
    ctx->pc = 0x15e04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 5));
    // 0x15e050: 0x28d3821  addu        $a3, $s4, $t5
    ctx->pc = 0x15e050u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 13)));
    // 0x15e054: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x15e054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x15e058: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x15e058u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x15e05c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15e05cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15e060: 0x2a76821  addu        $t5, $s5, $a3
    ctx->pc = 0x15e060u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
    // 0x15e064: 0x25270007  addiu       $a3, $t1, 0x7
    ctx->pc = 0x15e064u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 7));
    // 0x15e068: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x15e068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x15e06c: 0x2873821  addu        $a3, $s4, $a3
    ctx->pc = 0x15e06cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 7)));
    // 0x15e070: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x15e070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x15e074: 0xe7080  sll         $t6, $t6, 2
    ctx->pc = 0x15e074u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x15e078: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x15e078u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x15e07c: 0x26e7021  addu        $t6, $s3, $t6
    ctx->pc = 0x15e07cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 14)));
    // 0x15e080: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x15e080u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x15e084: 0x8dce0000  lw          $t6, 0x0($t6)
    ctx->pc = 0x15e084u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x15e088: 0x2a74021  addu        $t0, $s5, $a3
    ctx->pc = 0x15e088u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
    // 0x15e08c: 0x12a382a  slt         $a3, $t1, $t2
    ctx->pc = 0x15e08cu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x15e090: 0xacce2cd8  sw          $t6, 0x2CD8($a2)
    ctx->pc = 0x15e090u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 11480), GPR_U32(ctx, 14));
    // 0x15e094: 0x8d860008  lw          $a2, 0x8($t4)
    ctx->pc = 0x15e094u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x15e098: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x15e098u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x15e09c: 0x2663021  addu        $a2, $s3, $a2
    ctx->pc = 0x15e09cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x15e0a0: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x15e0a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x15e0a4: 0xaca62cd8  sw          $a2, 0x2CD8($a1)
    ctx->pc = 0x15e0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 11480), GPR_U32(ctx, 6));
    // 0x15e0a8: 0x8d85000c  lw          $a1, 0xC($t4)
    ctx->pc = 0x15e0a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x15e0ac: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x15e0acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x15e0b0: 0x2652821  addu        $a1, $s3, $a1
    ctx->pc = 0x15e0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x15e0b4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x15e0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x15e0b8: 0xac852cd8  sw          $a1, 0x2CD8($a0)
    ctx->pc = 0x15e0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 11480), GPR_U32(ctx, 5));
    // 0x15e0bc: 0x8d840010  lw          $a0, 0x10($t4)
    ctx->pc = 0x15e0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 16)));
    // 0x15e0c0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x15e0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x15e0c4: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x15e0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x15e0c8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x15e0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15e0cc: 0xac642cd8  sw          $a0, 0x2CD8($v1)
    ctx->pc = 0x15e0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 11480), GPR_U32(ctx, 4));
    // 0x15e0d0: 0x8d830014  lw          $v1, 0x14($t4)
    ctx->pc = 0x15e0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 20)));
    // 0x15e0d4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15e0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15e0d8: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x15e0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x15e0dc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x15e0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15e0e0: 0xac432cd8  sw          $v1, 0x2CD8($v0)
    ctx->pc = 0x15e0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 11480), GPR_U32(ctx, 3));
    // 0x15e0e4: 0x8d820018  lw          $v0, 0x18($t4)
    ctx->pc = 0x15e0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 24)));
    // 0x15e0e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15e0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15e0ec: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x15e0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x15e0f0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15e0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15e0f4: 0xada22cd8  sw          $v0, 0x2CD8($t5)
    ctx->pc = 0x15e0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 11480), GPR_U32(ctx, 2));
    // 0x15e0f8: 0x8d82001c  lw          $v0, 0x1C($t4)
    ctx->pc = 0x15e0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 28)));
    // 0x15e0fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15e0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15e100: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x15e100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x15e104: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15e104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15e108: 0x14e0ffb5  bnez        $a3, . + 4 + (-0x4B << 2)
    ctx->pc = 0x15E108u;
    {
        const bool branch_taken_0x15e108 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x15E10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E108u;
        // 0x15e10c: 0xad022cd8  sw          $v0, 0x2CD8($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 11480), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e108) {
            ctx->pc = 0x15DFE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15dfe0;
        }
    }
    ctx->pc = 0x15E110u;
}
