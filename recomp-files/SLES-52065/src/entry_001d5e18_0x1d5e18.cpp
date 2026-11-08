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

// Function: entry_001d5e18
// Address: 0x1d5e18 - 0x1d5e68
void entry_001d5e18_0x1d5e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5e18_0x1d5e18");
#endif

    ctx->pc = 0x1d5e18u;

    // 0x1d5e18: 0x126000cf  beqz        $s3, . + 4 + (0xCF << 2)
    ctx->pc = 0x1D5E18u;
    {
        const bool branch_taken_0x1d5e18 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5E18u;
        // 0x1d5e1c: 0x240309e4  addiu       $v1, $zero, 0x9E4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2532));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5e18) {
            ctx->pc = 0x1D6158u;
            return;
        }
    }
    ctx->pc = 0x1D5E20u;
    // 0x1d5e20: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1d5e20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1d5e24: 0x2831818  mult        $v1, $s4, $v1
    ctx->pc = 0x1d5e24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1d5e28: 0x24a50558  addiu       $a1, $a1, 0x558
    ctx->pc = 0x1d5e28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1368));
    // 0x1d5e2c: 0x24a4000c  addiu       $a0, $a1, 0xC
    ctx->pc = 0x1d5e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x1d5e30: 0x133823  negu        $a3, $s3
    ctx->pc = 0x1d5e30u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
    // 0x1d5e34: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1d5e34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5e38: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x1d5e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d5e3c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1d5e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1d5e40: 0xac520010  sw          $s2, 0x10($v0)
    ctx->pc = 0x1d5e40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 18));
    // 0x1d5e44: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1d5e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d5e48: 0xa33021  addu        $a2, $a1, $v1
    ctx->pc = 0x1d5e48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1d5e4c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1d5e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1d5e50: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1d5e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d5e54: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1d5e54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d5e58: 0xe2980b  movn        $s3, $a3, $v0
    ctx->pc = 0x1d5e58u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 7));
    // 0x1d5e5c: 0xac730000  sw          $s3, 0x0($v1)
    ctx->pc = 0x1d5e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 19));
    // 0x1d5e60: 0x100000bd  b           . + 4 + (0xBD << 2)
    ctx->pc = 0x1D5E60u;
    {
        const bool branch_taken_0x1d5e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5E60u;
        // 0x1d5e64: 0xacc80004  sw          $t0, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5e60) {
            ctx->pc = 0x1D6158u;
            return;
        }
    }
    ctx->pc = 0x1D5E68u;
}
