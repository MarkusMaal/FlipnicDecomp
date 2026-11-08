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

// Function: entry_0018fd1c
// Address: 0x18fd1c - 0x18fd5c
void entry_0018fd1c_0x18fd1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018fd1c_0x18fd1c");
#endif

    ctx->pc = 0x18fd1cu;

    // 0x18fd1c: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x18fd1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x18fd20: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x18fd20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x18fd24: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x18FD24u;
    {
        const bool branch_taken_0x18fd24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18fd24) {
            ctx->pc = 0x18FD5Cu;
            return;
        }
    }
    ctx->pc = 0x18FD2Cu;
    // 0x18fd2c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x18fd2cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18fd30: 0x78860220  lq          $a2, 0x220($a0)
    ctx->pc = 0x18fd30u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 4), 544)));
    // 0x18fd34: 0x70c210a8  pceqw       $v0, $a2, $v0
    ctx->pc = 0x18fd34u;
    SET_GPR_VEC(ctx, 2, PS2_PCEQW(GPR_VEC(ctx, 6), GPR_VEC(ctx, 2)));
    // 0x18fd38: 0x704215c8  ppach       $v0, $v0, $v0
    ctx->pc = 0x18fd38u;
    SET_GPR_VEC(ctx, 2, PS2_PPACH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x18fd3c: 0x2c42ffff  sltiu       $v0, $v0, -0x1
    ctx->pc = 0x18fd3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x18fd40: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x18fd40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x18fd44: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18FD44u;
    {
        const bool branch_taken_0x18fd44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18fd44) {
            ctx->pc = 0x18FD68u;
            return;
        }
    }
    ctx->pc = 0x18FD4Cu;
    // 0x18fd4c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x18fd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x18fd50: 0xac820230  sw          $v0, 0x230($a0)
    ctx->pc = 0x18fd50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 560), GPR_U32(ctx, 2));
    // 0x18fd54: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x18FD54u;
    {
        const bool branch_taken_0x18fd54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FD54u;
        // 0x18fd58: 0x8ca2000c  lw          $v0, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fd54) {
            ctx->pc = 0x18FD80u;
            return;
        }
    }
    ctx->pc = 0x18FD5Cu;
}
