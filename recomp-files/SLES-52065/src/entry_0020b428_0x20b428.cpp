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

// Function: entry_0020b428
// Address: 0x20b428 - 0x20b4b0
void entry_0020b428_0x20b428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020b428_0x20b428");
#endif

    ctx->pc = 0x20b428u;

label_20b428:
    // 0x20b428: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20b428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20b42c: 0x0  nop
    ctx->pc = 0x20b42cu;
    // NOP
    // 0x20b430: 0x0  nop
    ctx->pc = 0x20b430u;
    // NOP
    // 0x20b434: 0x0  nop
    ctx->pc = 0x20b434u;
    // NOP
    // 0x20b438: 0x0  nop
    ctx->pc = 0x20b438u;
    // NOP
    // 0x20b43c: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x20B43Cu;
    {
        const bool branch_taken_0x20b43c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x20b43c) {
            ctx->pc = 0x20B428u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20b428;
        }
    }
    ctx->pc = 0x20B444u;
    // 0x20b444: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x20b444u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x20b448: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x20b448u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x20b44c: 0x24a5deb0  addiu       $a1, $a1, -0x2150
    ctx->pc = 0x20b44cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958768));
    // 0x20b450: 0x34847010  ori         $a0, $a0, 0x7010
    ctx->pc = 0x20b450u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)28688);
    // 0x20b454: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x20b454u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x21DEB0u));
    // 0x20b458: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x20b458u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x20b45c: 0x3c075000  lui         $a3, 0x5000
    ctx->pc = 0x20b45cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20480 << 16));
    // 0x20b460: 0x34c62000  ori         $a2, $a2, 0x2000
    ctx->pc = 0x20b460u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8192);
    // 0x20b464: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x20b464u;
    runtime->Store128(rdram, ctx, 0x10007010u, GPR_VEC(ctx, 2));
    // 0x20b468: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x20b468u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x20b46c: 0x35082010  ori         $t0, $t0, 0x2010
    ctx->pc = 0x20b46cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)8208);
    // 0x20b470: 0x78a30010  lq          $v1, 0x10($a1)
    ctx->pc = 0x20b470u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x21DEC0u));
    // 0x20b474: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x20b474u;
    runtime->Store128(rdram, ctx, 0x10007010u, GPR_VEC(ctx, 3));
    // 0x20b478: 0x78a20020  lq          $v0, 0x20($a1)
    ctx->pc = 0x20b478u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x21DED0u));
    // 0x20b47c: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x20b47cu;
    runtime->Store128(rdram, ctx, 0x10007010u, GPR_VEC(ctx, 2));
    // 0x20b480: 0x78a30030  lq          $v1, 0x30($a1)
    ctx->pc = 0x20b480u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x21DEE0u));
    // 0x20b484: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x20b484u;
    runtime->Store128(rdram, ctx, 0x10007010u, GPR_VEC(ctx, 3));
    // 0x20b488: 0x78a20040  lq          $v0, 0x40($a1)
    ctx->pc = 0x20b488u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x21DEF0u));
    // 0x20b48c: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x20b48cu;
    runtime->Store128(rdram, ctx, 0x10007010u, GPR_VEC(ctx, 2));
    // 0x20b490: 0x78a30040  lq          $v1, 0x40($a1)
    ctx->pc = 0x20b490u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x21DEF0u));
    // 0x20b494: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x20b494u;
    runtime->Store128(rdram, ctx, 0x10007010u, GPR_VEC(ctx, 3));
    // 0x20b498: 0x78a20040  lq          $v0, 0x40($a1)
    ctx->pc = 0x20b498u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x21DEF0u));
    // 0x20b49c: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x20b49cu;
    runtime->Store128(rdram, ctx, 0x10007010u, GPR_VEC(ctx, 2));
    // 0x20b4a0: 0x78a30040  lq          $v1, 0x40($a1)
    ctx->pc = 0x20b4a0u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x21DEF0u));
    // 0x20b4a4: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x20b4a4u;
    runtime->Store128(rdram, ctx, 0x10007010u, GPR_VEC(ctx, 3));
    // 0x20b4a8: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x20b4a8u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 7));
    // 0x20b4ac: 0x0  nop
    ctx->pc = 0x20b4acu;
    // NOP
    ctx->pc = 0x20b4b0u;
}
