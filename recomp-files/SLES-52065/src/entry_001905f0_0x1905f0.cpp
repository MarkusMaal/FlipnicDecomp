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

// Function: entry_001905f0
// Address: 0x1905f0 - 0x19068c
void entry_001905f0_0x1905f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001905f0_0x1905f0");
#endif

    ctx->pc = 0x1905f0u;

label_1905f0:
    // 0x1905f0: 0x8ce40020  lw          $a0, 0x20($a3)
    ctx->pc = 0x1905f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x1905f4: 0x2085021  addu        $t2, $s0, $t0
    ctx->pc = 0x1905f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
    // 0x1905f8: 0x2024821  addu        $t1, $s0, $v0
    ctx->pc = 0x1905f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1905fc: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x1905fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x190600: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x190600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x190604: 0x45182a  slt         $v1, $v0, $a1
    ctx->pc = 0x190604u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x190608: 0xad440004  sw          $a0, 0x4($t2)
    ctx->pc = 0x190608u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 4));
    // 0x19060c: 0xa1201684  sb          $zero, 0x1684($t1)
    ctx->pc = 0x19060cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 5764), (uint8_t)GPR_U32(ctx, 0));
    // 0x190610: 0xa1201694  sb          $zero, 0x1694($t1)
    ctx->pc = 0x190610u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 5780), (uint8_t)GPR_U32(ctx, 0));
    // 0x190614: 0x8ce40044  lw          $a0, 0x44($a3)
    ctx->pc = 0x190614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 68)));
    // 0x190618: 0xad440008  sw          $a0, 0x8($t2)
    ctx->pc = 0x190618u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 4));
    // 0x19061c: 0xa1201685  sb          $zero, 0x1685($t1)
    ctx->pc = 0x19061cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 5765), (uint8_t)GPR_U32(ctx, 0));
    // 0x190620: 0xa1201695  sb          $zero, 0x1695($t1)
    ctx->pc = 0x190620u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 5781), (uint8_t)GPR_U32(ctx, 0));
    // 0x190624: 0x8ce40068  lw          $a0, 0x68($a3)
    ctx->pc = 0x190624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 104)));
    // 0x190628: 0xad44000c  sw          $a0, 0xC($t2)
    ctx->pc = 0x190628u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 4));
    // 0x19062c: 0xa1201686  sb          $zero, 0x1686($t1)
    ctx->pc = 0x19062cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 5766), (uint8_t)GPR_U32(ctx, 0));
    // 0x190630: 0xa1201696  sb          $zero, 0x1696($t1)
    ctx->pc = 0x190630u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 5782), (uint8_t)GPR_U32(ctx, 0));
    // 0x190634: 0x8ce4008c  lw          $a0, 0x8C($a3)
    ctx->pc = 0x190634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 140)));
    // 0x190638: 0xad440010  sw          $a0, 0x10($t2)
    ctx->pc = 0x190638u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 16), GPR_U32(ctx, 4));
    // 0x19063c: 0xa1201687  sb          $zero, 0x1687($t1)
    ctx->pc = 0x19063cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 5767), (uint8_t)GPR_U32(ctx, 0));
    // 0x190640: 0xa1201697  sb          $zero, 0x1697($t1)
    ctx->pc = 0x190640u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 5783), (uint8_t)GPR_U32(ctx, 0));
    // 0x190644: 0x8ce400b0  lw          $a0, 0xB0($a3)
    ctx->pc = 0x190644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 176)));
    // 0x190648: 0xad440014  sw          $a0, 0x14($t2)
    ctx->pc = 0x190648u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 20), GPR_U32(ctx, 4));
    // 0x19064c: 0xa1201688  sb          $zero, 0x1688($t1)
    ctx->pc = 0x19064cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 5768), (uint8_t)GPR_U32(ctx, 0));
    // 0x190650: 0xa1201698  sb          $zero, 0x1698($t1)
    ctx->pc = 0x190650u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 5784), (uint8_t)GPR_U32(ctx, 0));
    // 0x190654: 0x8ce400d4  lw          $a0, 0xD4($a3)
    ctx->pc = 0x190654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 212)));
    // 0x190658: 0xad440018  sw          $a0, 0x18($t2)
    ctx->pc = 0x190658u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 24), GPR_U32(ctx, 4));
    // 0x19065c: 0xa1201689  sb          $zero, 0x1689($t1)
    ctx->pc = 0x19065cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 5769), (uint8_t)GPR_U32(ctx, 0));
    // 0x190660: 0xa1201699  sb          $zero, 0x1699($t1)
    ctx->pc = 0x190660u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 5785), (uint8_t)GPR_U32(ctx, 0));
    // 0x190664: 0x8ce400f8  lw          $a0, 0xF8($a3)
    ctx->pc = 0x190664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 248)));
    // 0x190668: 0xad44001c  sw          $a0, 0x1C($t2)
    ctx->pc = 0x190668u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 28), GPR_U32(ctx, 4));
    // 0x19066c: 0xa120168a  sb          $zero, 0x168A($t1)
    ctx->pc = 0x19066cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 5770), (uint8_t)GPR_U32(ctx, 0));
    // 0x190670: 0xa120169a  sb          $zero, 0x169A($t1)
    ctx->pc = 0x190670u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 5786), (uint8_t)GPR_U32(ctx, 0));
    // 0x190674: 0x8ce4011c  lw          $a0, 0x11C($a3)
    ctx->pc = 0x190674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 284)));
    // 0x190678: 0xad440020  sw          $a0, 0x20($t2)
    ctx->pc = 0x190678u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 32), GPR_U32(ctx, 4));
    // 0x19067c: 0x24e70120  addiu       $a3, $a3, 0x120
    ctx->pc = 0x19067cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 288));
    // 0x190680: 0xa120168b  sb          $zero, 0x168B($t1)
    ctx->pc = 0x190680u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 5771), (uint8_t)GPR_U32(ctx, 0));
    // 0x190684: 0x1460ffda  bnez        $v1, . + 4 + (-0x26 << 2)
    ctx->pc = 0x190684u;
    {
        const bool branch_taken_0x190684 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x190688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190684u;
        // 0x190688: 0xa120169b  sb          $zero, 0x169B($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 5787), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190684) {
            ctx->pc = 0x1905F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1905f0;
        }
    }
    ctx->pc = 0x19068Cu;
}
