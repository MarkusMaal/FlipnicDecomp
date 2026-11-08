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

// Function: entry_0018627c
// Address: 0x18627c - 0x1862cc
void entry_0018627c_0x18627c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018627c_0x18627c");
#endif

    ctx->pc = 0x18627cu;

    // 0x18627c: 0x0  nop
    ctx->pc = 0x18627cu;
    // NOP
    // 0x186280: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x186280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x186284: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x186284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x186288: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x186288u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x18628c: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x18628Cu;
    {
        const bool branch_taken_0x18628c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x18628c) {
            ctx->pc = 0x1862CCu;
            return;
        }
    }
    ctx->pc = 0x186294u;
    // 0x186294: 0x8cc40014  lw          $a0, 0x14($a2)
    ctx->pc = 0x186294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x186298: 0x22900  sll         $a1, $v0, 4
    ctx->pc = 0x186298u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x18629c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x18629cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1862a0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1862a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1862a4: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x1862a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1862a8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1862a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1862ac: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x1862acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1862b0: 0x1420000c  bnez        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x1862B0u;
    {
        const bool branch_taken_0x1862b0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1862B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1862B0u;
        // 0x1862b4: 0xc4600014  lwc1        $f0, 0x14($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1862b0) {
            ctx->pc = 0x1862E4u;
            return;
        }
    }
    ctx->pc = 0x1862B8u;
    // 0x1862b8: 0xe4610014  swc1        $f1, 0x14($v1)
    ctx->pc = 0x1862b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x1862bc: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1862bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1862c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1862c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1862c4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1862C4u;
    {
        const bool branch_taken_0x1862c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1862C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1862C4u;
        // 0x1862c8: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1862c4) {
            ctx->pc = 0x1862E4u;
            return;
        }
    }
    ctx->pc = 0x1862CCu;
}
