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

// Function: entry_001e750c
// Address: 0x1e750c - 0x1e758c
void entry_001e750c_0x1e750c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e750c_0x1e750c");
#endif

    switch (ctx->pc) {
        case 0x1e7550u: goto label_1e7550;
        default: break;
    }

    ctx->pc = 0x1e750cu;

    // 0x1e750c: 0x27b10064  addiu       $s1, $sp, 0x64
    ctx->pc = 0x1e750cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x1e7510: 0x27b30065  addiu       $s3, $sp, 0x65
    ctx->pc = 0x1e7510u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 101));
    // 0x1e7514: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x1e7514u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1e7518: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x1e7518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1e751c: 0x82240000  lb          $a0, 0x0($s1)
    ctx->pc = 0x1e751cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e7520: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x1e7520u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e7524: 0x80e20000  lb          $v0, 0x0($a3)
    ctx->pc = 0x1e7524u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1e7528: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x1e7528u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1e752c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1e752cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e7530: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x1e7530u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1e7534: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x1e7534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1e7538: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x1e7538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1e753c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1e753cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1e7540: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e7540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e7544: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1e7544u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1e7548: 0xc079e3c  jal         func_1E78F0
    ctx->pc = 0x1E7548u;
    SET_GPR_U32(ctx, 31, 0x1E7550u);
    ctx->pc = 0x1E754Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7548u;
    // 0x1e754c: 0x822821  addu        $a1, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E78F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E78F0u, 0x1E7548u, 0x1E7550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7550u;
label_1e7550:
    // 0x1e7550: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x1e7550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1e7554: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e7554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7558: 0x8e860008  lw          $a2, 0x8($s4)
    ctx->pc = 0x1e7558u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1e755c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1e755cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1e7560: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e7560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e7564: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1e7564u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1e7568: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1e7568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1e756c: 0x10a30007  beq         $a1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E756Cu;
    {
        const bool branch_taken_0x1e756c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E7570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E756Cu;
        // 0x1e7570: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e756c) {
            ctx->pc = 0x1E758Cu;
            return;
        }
    }
    ctx->pc = 0x1E7574u;
    // 0x1e7574: 0x96440000  lhu         $a0, 0x0($s2)
    ctx->pc = 0x1e7574u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1e7578: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x1e7578u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e757c: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x1e757cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1e7580: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E7580u;
    {
        const bool branch_taken_0x1e7580 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7580u;
        // 0x1e7584: 0x3c032aaa  lui         $v1, 0x2AAA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)10922 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7580) {
            ctx->pc = 0x1E75A0u;
            return;
        }
    }
    ctx->pc = 0x1E7588u;
    // 0x1e7588: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1e7588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1e758cu;
}
