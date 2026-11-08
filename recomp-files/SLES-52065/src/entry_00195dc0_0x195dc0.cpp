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

// Function: entry_00195dc0
// Address: 0x195dc0 - 0x195e1c
void entry_00195dc0_0x195dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195dc0_0x195dc0");
#endif

    ctx->pc = 0x195dc0u;

    // 0x195dc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x195dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x195dc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x195dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x195dc8: 0x8f87838c  lw          $a3, -0x7C74($gp)
    ctx->pc = 0x195dc8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935436)));
    // 0x195dcc: 0x8c830664  lw          $v1, 0x664($a0)
    ctx->pc = 0x195dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1636)));
    // 0x195dd0: 0x8f868318  lw          $a2, -0x7CE8($gp)
    ctx->pc = 0x195dd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935320)));
    // 0x195dd4: 0x72900  sll         $a1, $a3, 4
    ctx->pc = 0x195dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x195dd8: 0xa72823  subu        $a1, $a1, $a3
    ctx->pc = 0x195dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x195ddc: 0x538c0  sll         $a3, $a1, 3
    ctx->pc = 0x195ddcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x195de0: 0x8c650028  lw          $a1, 0x28($v1)
    ctx->pc = 0x195de0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x195de4: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x195de4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x195de8: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x195de8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x195dec: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x195decu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x195df0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x195df0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x195df4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x195df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x195df8: 0x8c63ff88  lw          $v1, -0x78($v1)
    ctx->pc = 0x195df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967176)));
    // 0x195dfc: 0xac83032c  sw          $v1, 0x32C($a0)
    ctx->pc = 0x195dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 812), GPR_U32(ctx, 3));
    // 0x195e00: 0x8c830664  lw          $v1, 0x664($a0)
    ctx->pc = 0x195e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1636)));
    // 0x195e04: 0x8c85032c  lw          $a1, 0x32C($a0)
    ctx->pc = 0x195e04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 812)));
    // 0x195e08: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x195e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x195e0c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x195e0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x195e10: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x195E10u;
    {
        const bool branch_taken_0x195e10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x195e10) {
            ctx->pc = 0x195E1Cu;
            return;
        }
    }
    ctx->pc = 0x195E18u;
    // 0x195e18: 0xac800320  sw          $zero, 0x320($a0)
    ctx->pc = 0x195e18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 800), GPR_U32(ctx, 0));
    ctx->pc = 0x195e1cu;
}
