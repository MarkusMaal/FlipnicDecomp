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

// Function: entry_00191bf4
// Address: 0x191bf4 - 0x191c50
void entry_00191bf4_0x191bf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191bf4_0x191bf4");
#endif

    ctx->pc = 0x191bf4u;

    // 0x191bf4: 0x0  nop
    ctx->pc = 0x191bf4u;
    // NOP
    // 0x191bf8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x191bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x191bfc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x191bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x191c00: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x191c00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x191c04: 0x10a701c7  beq         $a1, $a3, . + 4 + (0x1C7 << 2)
    ctx->pc = 0x191C04u;
    {
        const bool branch_taken_0x191c04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        if (branch_taken_0x191c04) {
            ctx->pc = 0x192324u;
            return;
        }
    }
    ctx->pc = 0x191C0Cu;
    // 0x191c0c: 0x8d092c10  lw          $t1, 0x2C10($t0)
    ctx->pc = 0x191c0cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 11280)));
    // 0x191c10: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x191c10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x191c14: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x191c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x191c18: 0x8d062c1c  lw          $a2, 0x2C1C($t0)
    ctx->pc = 0x191c18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 11292)));
    // 0x191c1c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x191c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x191c20: 0x92880  sll         $a1, $t1, 2
    ctx->pc = 0x191c20u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x191c24: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x191c24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x191c28: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x191c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x191c2c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x191c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x191c30: 0x9042003f  lbu         $v0, 0x3F($v0)
    ctx->pc = 0x191c30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 63)));
    // 0x191c34: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x191c34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x191c38: 0x90a5003f  lbu         $a1, 0x3F($a1)
    ctx->pc = 0x191c38u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 63)));
    // 0x191c3c: 0x14450004  bne         $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x191C3Cu;
    {
        const bool branch_taken_0x191c3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x191C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191C3Cu;
        // 0x191c40: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191c3c) {
            ctx->pc = 0x191C50u;
            return;
        }
    }
    ctx->pc = 0x191C44u;
    // 0x191c44: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x191c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x191c48: 0x100001b6  b           . + 4 + (0x1B6 << 2)
    ctx->pc = 0x191C48u;
    {
        const bool branch_taken_0x191c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191C48u;
        // 0x191c4c: 0xac4004d0  sw          $zero, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191c48) {
            ctx->pc = 0x192324u;
            return;
        }
    }
    ctx->pc = 0x191C50u;
}
