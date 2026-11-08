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

// Function: entry_0020b4e8
// Address: 0x20b4e8 - 0x20b540
void entry_0020b4e8_0x20b4e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020b4e8_0x20b4e8");
#endif

    ctx->pc = 0x20b4e8u;

label_20b4e8:
    // 0x20b4e8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x20b4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20b4ec: 0x0  nop
    ctx->pc = 0x20b4ecu;
    // NOP
    // 0x20b4f0: 0x0  nop
    ctx->pc = 0x20b4f0u;
    // NOP
    // 0x20b4f4: 0x0  nop
    ctx->pc = 0x20b4f4u;
    // NOP
    // 0x20b4f8: 0x0  nop
    ctx->pc = 0x20b4f8u;
    // NOP
    // 0x20b4fc: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x20B4FCu;
    {
        const bool branch_taken_0x20b4fc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x20b4fc) {
            ctx->pc = 0x20B4E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20b4e8;
        }
    }
    ctx->pc = 0x20B504u;
    // 0x20b504: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x20b504u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x20b508: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x20b508u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x20b50c: 0x2463df00  addiu       $v1, $v1, -0x2100
    ctx->pc = 0x20b50cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958848));
    // 0x20b510: 0x34847010  ori         $a0, $a0, 0x7010
    ctx->pc = 0x20b510u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)28688);
    // 0x20b514: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x20b514u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x21DF00u));
    // 0x20b518: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x20b518u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x20b51c: 0x3c066000  lui         $a2, 0x6000
    ctx->pc = 0x20b51cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)24576 << 16));
    // 0x20b520: 0x34a52000  ori         $a1, $a1, 0x2000
    ctx->pc = 0x20b520u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8192);
    // 0x20b524: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x20b524u;
    runtime->Store128(rdram, ctx, 0x10007010u, GPR_VEC(ctx, 2));
    // 0x20b528: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x20b528u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x20b52c: 0x34e72010  ori         $a3, $a3, 0x2010
    ctx->pc = 0x20b52cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8208);
    // 0x20b530: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x20b530u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x21DF10u));
    // 0x20b534: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x20b534u;
    runtime->Store128(rdram, ctx, 0x10007010u, GPR_VEC(ctx, 2));
    // 0x20b538: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x20b538u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 6));
    // 0x20b53c: 0x0  nop
    ctx->pc = 0x20b53cu;
    // NOP
    ctx->pc = 0x20b540u;
}
