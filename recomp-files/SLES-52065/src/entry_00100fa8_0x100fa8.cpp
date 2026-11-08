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

// Function: entry_00100fa8
// Address: 0x100fa8 - 0x100fe4
void entry_00100fa8_0x100fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100fa8_0x100fa8");
#endif

    ctx->pc = 0x100fa8u;

    // 0x100fa8: 0x8f828388  lw          $v0, -0x7C78($gp)
    ctx->pc = 0x100fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
    // 0x100fac: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x100facu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x100fb0: 0xc71021  addu        $v0, $a2, $a3
    ctx->pc = 0x100fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x100fb4: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x100fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x100fb8: 0x8442000a  lh          $v0, 0xA($v0)
    ctx->pc = 0x100fb8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x100fbc: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x100fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x100fc0: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x100fc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x100fc4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x100fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x100fc8: 0x80a20008  lb          $v0, 0x8($a1)
    ctx->pc = 0x100fc8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x100fcc: 0x14520014  bne         $v0, $s2, . + 4 + (0x14 << 2)
    ctx->pc = 0x100FCCu;
    {
        const bool branch_taken_0x100fcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x100FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100FCCu;
        // 0x100fd0: 0x11082a  slt         $at, $zero, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x100fcc) {
            ctx->pc = 0x101020u;
            return;
        }
    }
    ctx->pc = 0x100FD4u;
    // 0x100fd4: 0x24a80009  addiu       $t0, $a1, 0x9
    ctx->pc = 0x100fd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 9));
    // 0x100fd8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x100fd8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x100fdc: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x100FDCu;
    {
        const bool branch_taken_0x100fdc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x100FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100FDCu;
        // 0x100fe0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100fdc) {
            ctx->pc = 0x101020u;
            return;
        }
    }
    ctx->pc = 0x100FE4u;
}
