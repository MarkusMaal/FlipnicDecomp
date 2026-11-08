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

// Function: entry_001a8f6c
// Address: 0x1a8f6c - 0x1a8fa8
void entry_001a8f6c_0x1a8f6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8f6c_0x1a8f6c");
#endif

    ctx->pc = 0x1a8f6cu;

    // 0x1a8f6c: 0x0  nop
    ctx->pc = 0x1a8f6cu;
    // NOP
    // 0x1a8f70: 0x771021  addu        $v0, $v1, $s7
    ctx->pc = 0x1a8f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x1a8f74: 0x8c4306b8  lw          $v1, 0x6B8($v0)
    ctx->pc = 0x1a8f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1720)));
    // 0x1a8f78: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1A8F78u;
    {
        const bool branch_taken_0x1a8f78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8F78u;
        // 0x1a8f7c: 0x245306b8  addiu       $s3, $v0, 0x6B8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 1720));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8f78) {
            ctx->pc = 0x1A8FA8u;
            return;
        }
    }
    ctx->pc = 0x1A8F80u;
    // 0x1a8f80: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1a8f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1a8f84: 0x1c600008  bgtz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A8F84u;
    {
        const bool branch_taken_0x1a8f84 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1A8F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8F84u;
        // 0x1a8f88: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8f84) {
            ctx->pc = 0x1A8FA8u;
            return;
        }
    }
    ctx->pc = 0x1A8F8Cu;
    // 0x1a8f8c: 0x8c4406b0  lw          $a0, 0x6B0($v0)
    ctx->pc = 0x1a8f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1712)));
    // 0x1a8f90: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x1a8f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1a8f94: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1a8f94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a8f98: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a8f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a8f9c: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x1a8f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
    // 0x1a8fa0: 0xa06001d3  sb          $zero, 0x1D3($v1)
    ctx->pc = 0x1a8fa0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 467), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a8fa4: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x1a8fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x1a8fa8u;
}
