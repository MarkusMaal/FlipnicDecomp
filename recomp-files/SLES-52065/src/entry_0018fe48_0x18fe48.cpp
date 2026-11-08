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

// Function: entry_0018fe48
// Address: 0x18fe48 - 0x18fec8
void entry_0018fe48_0x18fe48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018fe48_0x18fe48");
#endif

    ctx->pc = 0x18fe48u;

    // 0x18fe48: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x18fe48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x18fe4c: 0x10a0004d  beqz        $a1, . + 4 + (0x4D << 2)
    ctx->pc = 0x18FE4Cu;
    {
        const bool branch_taken_0x18fe4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FE4Cu;
        // 0x18fe50: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fe4c) {
            ctx->pc = 0x18FF84u;
            return;
        }
    }
    ctx->pc = 0x18FE54u;
    // 0x18fe54: 0x8ca30030  lw          $v1, 0x30($a1)
    ctx->pc = 0x18fe54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x18fe58: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x18fe58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18fe5c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x18fe5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x18fe60: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x18fe60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x18fe64: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x18fe64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x18fe68: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x18fe68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x18fe6c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x18fe6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x18fe70: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18fe70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18fe74: 0x24640154  addiu       $a0, $v1, 0x154
    ctx->pc = 0x18fe74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 340));
    // 0x18fe78: 0x8c630154  lw          $v1, 0x154($v1)
    ctx->pc = 0x18fe78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x18fe7c: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x18FE7Cu;
    {
        const bool branch_taken_0x18fe7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18fe7c) {
            ctx->pc = 0x18FEC8u;
            return;
        }
    }
    ctx->pc = 0x18FE84u;
    // 0x18fe84: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x18fe84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18fe88: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x18FE88u;
    {
        const bool branch_taken_0x18fe88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18FE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FE88u;
        // 0x18fe8c: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fe88) {
            ctx->pc = 0x18FEC8u;
            return;
        }
    }
    ctx->pc = 0x18FE90u;
    // 0x18fe90: 0x8ca30030  lw          $v1, 0x30($a1)
    ctx->pc = 0x18fe90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x18fe94: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x18fe94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18fe98: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x18fe98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x18fe9c: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x18fe9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x18fea0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x18fea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18fea4: 0xac830034  sw          $v1, 0x34($a0)
    ctx->pc = 0x18fea4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 3));
    // 0x18fea8: 0x8ca30030  lw          $v1, 0x30($a1)
    ctx->pc = 0x18fea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x18feac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x18feacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18feb0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x18feb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x18feb4: 0x24640034  addiu       $a0, $v1, 0x34
    ctx->pc = 0x18feb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 52));
    // 0x18feb8: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x18feb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x18febc: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x18FEBCu;
    {
        const bool branch_taken_0x18febc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x18FEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FEBCu;
        // 0x18fec0: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18febc) {
            ctx->pc = 0x18FEC8u;
            return;
        }
    }
    ctx->pc = 0x18FEC4u;
    // 0x18fec4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x18fec4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x18fec8u;
}
