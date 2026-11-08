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

// Function: entry_0013fe58
// Address: 0x13fe58 - 0x13fec0
void entry_0013fe58_0x13fe58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013fe58_0x13fe58");
#endif

    ctx->pc = 0x13fe58u;

    // 0x13fe58: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x13fe58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13fe5c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x13fe5cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x13fe60: 0x8ca5000c  lw          $a1, 0xC($a1)
    ctx->pc = 0x13fe60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x13fe64: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x13fe64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x13fe68: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x13fe68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x13fe6c: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x13fe6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13fe70: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x13fe70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x13fe74: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13fe74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13fe78: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x13fe78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x13fe7c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x13fe7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13fe80: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x13fe80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x13fe84: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x13fe84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x13fe88: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x13fe88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x13fe8c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x13fe8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13fe90: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x13fe90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x13fe94: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x13fe94u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x13fe98: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x13FE98u;
    {
        const bool branch_taken_0x13fe98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13fe98) {
            ctx->pc = 0x13FEC0u;
            return;
        }
    }
    ctx->pc = 0x13FEA0u;
    // 0x13fea0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x13fea0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13fea4: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x13fea4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x13fea8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x13fea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x13feac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13feacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13feb0: 0xafa50064  sw          $a1, 0x64($sp)
    ctx->pc = 0x13feb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 5));
    // 0x13feb4: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x13feb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
    // 0x13feb8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x13FEB8u;
    {
        const bool branch_taken_0x13feb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FEB8u;
        // 0x13febc: 0xafa40060  sw          $a0, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13feb8) {
            ctx->pc = 0x13FEE0u;
            return;
        }
    }
    ctx->pc = 0x13FEC0u;
}
