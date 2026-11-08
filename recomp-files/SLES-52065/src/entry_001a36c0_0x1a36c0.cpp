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

// Function: entry_001a36c0
// Address: 0x1a36c0 - 0x1a3794
void entry_001a36c0_0x1a36c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a36c0_0x1a36c0");
#endif

    ctx->pc = 0x1a36c0u;

label_1a36c0:
    // 0x1a36c0: 0x2296021  addu        $t4, $s1, $t1
    ctx->pc = 0x1a36c0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 9)));
    // 0x1a36c4: 0x25ad0008  addiu       $t5, $t5, 0x8
    ctx->pc = 0x1a36c4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
    // 0x1a36c8: 0x8d83069c  lw          $v1, 0x69C($t4)
    ctx->pc = 0x1a36c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 1692)));
    // 0x1a36cc: 0x1a8702a  slt         $t6, $t5, $t0
    ctx->pc = 0x1a36ccu;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1a36d0: 0x8d840698  lw          $a0, 0x698($t4)
    ctx->pc = 0x1a36d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 1688)));
    // 0x1a36d4: 0x25290020  addiu       $t1, $t1, 0x20
    ctx->pc = 0x1a36d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
    // 0x1a36d8: 0x8d860690  lw          $a2, 0x690($t4)
    ctx->pc = 0x1a36d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 1680)));
    // 0x1a36dc: 0x8d850694  lw          $a1, 0x694($t4)
    ctx->pc = 0x1a36dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 1684)));
    // 0x1a36e0: 0x8d9806a0  lw          $t8, 0x6A0($t4)
    ctx->pc = 0x1a36e0u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 1696)));
    // 0x1a36e4: 0x8d9206a4  lw          $s2, 0x6A4($t4)
    ctx->pc = 0x1a36e4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 1700)));
    // 0x1a36e8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a36e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a36ec: 0x8d8f06a8  lw          $t7, 0x6A8($t4)
    ctx->pc = 0x1a36ecu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 1704)));
    // 0x1a36f0: 0x1631821  addu        $v1, $t3, $v1
    ctx->pc = 0x1a36f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x1a36f4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1a36f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a36f8: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x1a36f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
    // 0x1a36fc: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x1a36fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
    // 0x1a3700: 0x8c842cd8  lw          $a0, 0x2CD8($a0)
    ctx->pc = 0x1a3700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11480)));
    // 0x1a3704: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1a3704u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a3708: 0x1663021  addu        $a2, $t3, $a2
    ctx->pc = 0x1a3708u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 6)));
    // 0x1a370c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1a370cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1a3710: 0x8cc62cd8  lw          $a2, 0x2CD8($a2)
    ctx->pc = 0x1a3710u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 11480)));
    // 0x1a3714: 0x1652821  addu        $a1, $t3, $a1
    ctx->pc = 0x1a3714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 5)));
    // 0x1a3718: 0x8ca52cd8  lw          $a1, 0x2CD8($a1)
    ctx->pc = 0x1a3718u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 11480)));
    // 0x1a371c: 0x18c080  sll         $t8, $t8, 2
    ctx->pc = 0x1a371cu;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 24), 2));
    // 0x1a3720: 0x178c021  addu        $t8, $t3, $t8
    ctx->pc = 0x1a3720u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 24)));
    // 0x1a3724: 0x129080  sll         $s2, $s2, 2
    ctx->pc = 0x1a3724u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1a3728: 0x8c7301fc  lw          $s3, 0x1FC($v1)
    ctx->pc = 0x1a3728u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 508)));
    // 0x1a372c: 0x1729021  addu        $s2, $t3, $s2
    ctx->pc = 0x1a372cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 18)));
    // 0x1a3730: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1a3730u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1a3734: 0x8c9901fc  lw          $t9, 0x1FC($a0)
    ctx->pc = 0x1a3734u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 508)));
    // 0x1a3738: 0x16f7821  addu        $t7, $t3, $t7
    ctx->pc = 0x1a3738u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 15)));
    // 0x1a373c: 0x8f182cd8  lw          $t8, 0x2CD8($t8)
    ctx->pc = 0x1a373cu;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 11480)));
    // 0x1a3740: 0x8cc601fc  lw          $a2, 0x1FC($a2)
    ctx->pc = 0x1a3740u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 508)));
    // 0x1a3744: 0x8ca501fc  lw          $a1, 0x1FC($a1)
    ctx->pc = 0x1a3744u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 508)));
    // 0x1a3748: 0x8e522cd8  lw          $s2, 0x2CD8($s2)
    ctx->pc = 0x1a3748u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11480)));
    // 0x1a374c: 0x8d8306ac  lw          $v1, 0x6AC($t4)
    ctx->pc = 0x1a374cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 1708)));
    // 0x1a3750: 0x8de42cd8  lw          $a0, 0x2CD8($t7)
    ctx->pc = 0x1a3750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 11480)));
    // 0x1a3754: 0xe63821  addu        $a3, $a3, $a2
    ctx->pc = 0x1a3754u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1a3758: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x1a3758u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x1a375c: 0x8f0601fc  lw          $a2, 0x1FC($t8)
    ctx->pc = 0x1a375cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 508)));
    // 0x1a3760: 0xf93821  addu        $a3, $a3, $t9
    ctx->pc = 0x1a3760u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 25)));
    // 0x1a3764: 0x8e4501fc  lw          $a1, 0x1FC($s2)
    ctx->pc = 0x1a3764u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 508)));
    // 0x1a3768: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a3768u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a376c: 0xf33821  addu        $a3, $a3, $s3
    ctx->pc = 0x1a376cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 19)));
    // 0x1a3770: 0x1631821  addu        $v1, $t3, $v1
    ctx->pc = 0x1a3770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x1a3774: 0x8c8401fc  lw          $a0, 0x1FC($a0)
    ctx->pc = 0x1a3774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 508)));
    // 0x1a3778: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x1a3778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
    // 0x1a377c: 0xe63821  addu        $a3, $a3, $a2
    ctx->pc = 0x1a377cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1a3780: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x1a3780u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x1a3784: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x1a3784u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x1a3788: 0x8c6301fc  lw          $v1, 0x1FC($v1)
    ctx->pc = 0x1a3788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 508)));
    // 0x1a378c: 0x15c0ffcc  bnez        $t6, . + 4 + (-0x34 << 2)
    ctx->pc = 0x1A378Cu;
    {
        const bool branch_taken_0x1a378c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A3790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A378Cu;
        // 0x1a3790: 0xe33821  addu        $a3, $a3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a378c) {
            ctx->pc = 0x1A36C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a36c0;
        }
    }
    ctx->pc = 0x1A3794u;
}
