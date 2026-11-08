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

// Function: entry_00191ab0
// Address: 0x191ab0 - 0x191b0c
void entry_00191ab0_0x191ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191ab0_0x191ab0");
#endif

    ctx->pc = 0x191ab0u;

    // 0x191ab0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x191ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x191ab4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x191ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x191ab8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x191ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x191abc: 0x10a70219  beq         $a1, $a3, . + 4 + (0x219 << 2)
    ctx->pc = 0x191ABCu;
    {
        const bool branch_taken_0x191abc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        if (branch_taken_0x191abc) {
            ctx->pc = 0x192324u;
            return;
        }
    }
    ctx->pc = 0x191AC4u;
    // 0x191ac4: 0x8d092c10  lw          $t1, 0x2C10($t0)
    ctx->pc = 0x191ac4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 11280)));
    // 0x191ac8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x191ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x191acc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x191accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x191ad0: 0x8d062c1c  lw          $a2, 0x2C1C($t0)
    ctx->pc = 0x191ad0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 11292)));
    // 0x191ad4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x191ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x191ad8: 0x92880  sll         $a1, $t1, 2
    ctx->pc = 0x191ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x191adc: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x191adcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x191ae0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x191ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x191ae4: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x191ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x191ae8: 0x9042003f  lbu         $v0, 0x3F($v0)
    ctx->pc = 0x191ae8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 63)));
    // 0x191aec: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x191aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x191af0: 0x90a5003f  lbu         $a1, 0x3F($a1)
    ctx->pc = 0x191af0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 63)));
    // 0x191af4: 0x14450005  bne         $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x191AF4u;
    {
        const bool branch_taken_0x191af4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x191AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191AF4u;
        // 0x191af8: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191af4) {
            ctx->pc = 0x191B0Cu;
            return;
        }
    }
    ctx->pc = 0x191AFCu;
    // 0x191afc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x191afcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x191b00: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x191b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x191b04: 0x10000207  b           . + 4 + (0x207 << 2)
    ctx->pc = 0x191B04u;
    {
        const bool branch_taken_0x191b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191B04u;
        // 0x191b08: 0xac4304d0  sw          $v1, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191b04) {
            ctx->pc = 0x192324u;
            return;
        }
    }
    ctx->pc = 0x191B0Cu;
}
