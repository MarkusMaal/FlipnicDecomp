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

// Function: entry_001a3aa0
// Address: 0x1a3aa0 - 0x1a3b74
void entry_001a3aa0_0x1a3aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a3aa0_0x1a3aa0");
#endif

    ctx->pc = 0x1a3aa0u;

label_1a3aa0:
    // 0x1a3aa0: 0x2285821  addu        $t3, $s1, $t0
    ctx->pc = 0x1a3aa0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 8)));
    // 0x1a3aa4: 0x258c0008  addiu       $t4, $t4, 0x8
    ctx->pc = 0x1a3aa4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 8));
    // 0x1a3aa8: 0x8d63069c  lw          $v1, 0x69C($t3)
    ctx->pc = 0x1a3aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 1692)));
    // 0x1a3aac: 0x187702a  slt         $t6, $t4, $a3
    ctx->pc = 0x1a3aacu;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1a3ab0: 0x8d640698  lw          $a0, 0x698($t3)
    ctx->pc = 0x1a3ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 1688)));
    // 0x1a3ab4: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x1a3ab4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x1a3ab8: 0x8d660690  lw          $a2, 0x690($t3)
    ctx->pc = 0x1a3ab8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 1680)));
    // 0x1a3abc: 0x8d650694  lw          $a1, 0x694($t3)
    ctx->pc = 0x1a3abcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 1684)));
    // 0x1a3ac0: 0x8d7806a0  lw          $t8, 0x6A0($t3)
    ctx->pc = 0x1a3ac0u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 1696)));
    // 0x1a3ac4: 0x8d7206a4  lw          $s2, 0x6A4($t3)
    ctx->pc = 0x1a3ac4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 1700)));
    // 0x1a3ac8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a3ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a3acc: 0x8d6f06a8  lw          $t7, 0x6A8($t3)
    ctx->pc = 0x1a3accu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 1704)));
    // 0x1a3ad0: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x1a3ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x1a3ad4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1a3ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a3ad8: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x1a3ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
    // 0x1a3adc: 0x1442021  addu        $a0, $t2, $a0
    ctx->pc = 0x1a3adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x1a3ae0: 0x8c842cd8  lw          $a0, 0x2CD8($a0)
    ctx->pc = 0x1a3ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11480)));
    // 0x1a3ae4: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1a3ae4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a3ae8: 0x1463021  addu        $a2, $t2, $a2
    ctx->pc = 0x1a3ae8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x1a3aec: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1a3aecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1a3af0: 0x8cc62cd8  lw          $a2, 0x2CD8($a2)
    ctx->pc = 0x1a3af0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 11480)));
    // 0x1a3af4: 0x1452821  addu        $a1, $t2, $a1
    ctx->pc = 0x1a3af4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x1a3af8: 0x8ca52cd8  lw          $a1, 0x2CD8($a1)
    ctx->pc = 0x1a3af8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 11480)));
    // 0x1a3afc: 0x18c080  sll         $t8, $t8, 2
    ctx->pc = 0x1a3afcu;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 24), 2));
    // 0x1a3b00: 0x158c021  addu        $t8, $t2, $t8
    ctx->pc = 0x1a3b00u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 24)));
    // 0x1a3b04: 0x129080  sll         $s2, $s2, 2
    ctx->pc = 0x1a3b04u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1a3b08: 0x8c7301fc  lw          $s3, 0x1FC($v1)
    ctx->pc = 0x1a3b08u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 508)));
    // 0x1a3b0c: 0x1529021  addu        $s2, $t2, $s2
    ctx->pc = 0x1a3b0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 18)));
    // 0x1a3b10: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1a3b10u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1a3b14: 0x8c9901fc  lw          $t9, 0x1FC($a0)
    ctx->pc = 0x1a3b14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 508)));
    // 0x1a3b18: 0x14f7821  addu        $t7, $t2, $t7
    ctx->pc = 0x1a3b18u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 15)));
    // 0x1a3b1c: 0x8f182cd8  lw          $t8, 0x2CD8($t8)
    ctx->pc = 0x1a3b1cu;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 11480)));
    // 0x1a3b20: 0x8cc601fc  lw          $a2, 0x1FC($a2)
    ctx->pc = 0x1a3b20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 508)));
    // 0x1a3b24: 0x8ca501fc  lw          $a1, 0x1FC($a1)
    ctx->pc = 0x1a3b24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 508)));
    // 0x1a3b28: 0x8e522cd8  lw          $s2, 0x2CD8($s2)
    ctx->pc = 0x1a3b28u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11480)));
    // 0x1a3b2c: 0x8d6306ac  lw          $v1, 0x6AC($t3)
    ctx->pc = 0x1a3b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 1708)));
    // 0x1a3b30: 0x8de42cd8  lw          $a0, 0x2CD8($t7)
    ctx->pc = 0x1a3b30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 11480)));
    // 0x1a3b34: 0x1a66821  addu        $t5, $t5, $a2
    ctx->pc = 0x1a3b34u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 6)));
    // 0x1a3b38: 0x1a56821  addu        $t5, $t5, $a1
    ctx->pc = 0x1a3b38u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 5)));
    // 0x1a3b3c: 0x8f0601fc  lw          $a2, 0x1FC($t8)
    ctx->pc = 0x1a3b3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 508)));
    // 0x1a3b40: 0x1b96821  addu        $t5, $t5, $t9
    ctx->pc = 0x1a3b40u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 25)));
    // 0x1a3b44: 0x8e4501fc  lw          $a1, 0x1FC($s2)
    ctx->pc = 0x1a3b44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 508)));
    // 0x1a3b48: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a3b48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a3b4c: 0x1b36821  addu        $t5, $t5, $s3
    ctx->pc = 0x1a3b4cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 19)));
    // 0x1a3b50: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x1a3b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x1a3b54: 0x8c8401fc  lw          $a0, 0x1FC($a0)
    ctx->pc = 0x1a3b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 508)));
    // 0x1a3b58: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x1a3b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
    // 0x1a3b5c: 0x1a66821  addu        $t5, $t5, $a2
    ctx->pc = 0x1a3b5cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 6)));
    // 0x1a3b60: 0x1a56821  addu        $t5, $t5, $a1
    ctx->pc = 0x1a3b60u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 5)));
    // 0x1a3b64: 0x1a46821  addu        $t5, $t5, $a0
    ctx->pc = 0x1a3b64u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 4)));
    // 0x1a3b68: 0x8c6301fc  lw          $v1, 0x1FC($v1)
    ctx->pc = 0x1a3b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 508)));
    // 0x1a3b6c: 0x15c0ffcc  bnez        $t6, . + 4 + (-0x34 << 2)
    ctx->pc = 0x1A3B6Cu;
    {
        const bool branch_taken_0x1a3b6c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A3B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3B6Cu;
        // 0x1a3b70: 0x1a36821  addu        $t5, $t5, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3b6c) {
            ctx->pc = 0x1A3AA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a3aa0;
        }
    }
    ctx->pc = 0x1A3B74u;
}
