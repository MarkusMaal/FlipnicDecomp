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

// Function: caseD_0
// Address: 0x1ed12c - 0x1ed174
void caseD_0_0x1ed12c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x1ed12c");
#endif

    ctx->pc = 0x1ed12cu;

    // 0x1ed12c: 0x82430001  lb          $v1, 0x1($s2)
    ctx->pc = 0x1ed12cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x1ed130: 0x2465ffd0  addiu       $a1, $v1, -0x30
    ctx->pc = 0x1ed130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x1ed134: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x1ed134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1ed138: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x1ed138u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1ed13c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1ED13Cu;
    {
        const bool branch_taken_0x1ed13c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED13Cu;
        // 0x1ed140: 0x82460002  lb          $a2, 0x2($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed13c) {
            ctx->pc = 0x1ED1B4u;
            return;
        }
    }
    ctx->pc = 0x1ED144u;
    // 0x1ed144: 0x24c2ffd0  addiu       $v0, $a2, -0x30
    ctx->pc = 0x1ed144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967248));
    // 0x1ed148: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x1ed148u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1ed14c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1ED14Cu;
    {
        const bool branch_taken_0x1ed14c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED14Cu;
        // 0x1ed150: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed14c) {
            ctx->pc = 0x1ED174u;
            return;
        }
    }
    ctx->pc = 0x1ED154u;
    // 0x1ed154: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x1ed154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1ed158: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x1ed158u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1ed15c: 0x26500002  addiu       $s0, $s2, 0x2
    ctx->pc = 0x1ed15cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x1ed160: 0x2463ffd0  addiu       $v1, $v1, -0x30
    ctx->pc = 0x1ed160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x1ed164: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x1ed164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1ed168: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x1ed168u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1ed16c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1ED16Cu;
    {
        const bool branch_taken_0x1ed16c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED16Cu;
        // 0x1ed170: 0x82280a  movz        $a1, $a0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed16c) {
            ctx->pc = 0x1ED178u;
            return;
        }
    }
    ctx->pc = 0x1ED174u;
}
