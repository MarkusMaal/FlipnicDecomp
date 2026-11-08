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

// Function: entry_00119e7c
// Address: 0x119e7c - 0x119eb8
void entry_00119e7c_0x119e7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119e7c_0x119e7c");
#endif

    switch (ctx->pc) {
        case 0x119e8cu: goto label_119e8c;
        case 0x119ea4u: goto label_119ea4;
        default: break;
    }

    ctx->pc = 0x119e7cu;

    // 0x119e7c: 0x8f8283ac  lw          $v0, -0x7C54($gp)
    ctx->pc = 0x119e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935468)));
    // 0x119e80: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x119e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x119e84: 0xc04b220  jal         func_12C880
    ctx->pc = 0x119E84u;
    SET_GPR_U32(ctx, 31, 0x119E8Cu);
    ctx->pc = 0x119E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119E84u;
    // 0x119e88: 0xaf8283ac  sw          $v0, -0x7C54($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935468), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C880u, 0x119E84u, 0x119E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119E8Cu;
label_119e8c:
    // 0x119e8c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x119e8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119e90: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x119e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x119e94: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x119e94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x119e98: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x119e98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x119e9c: 0xc04b60c  jal         func_12D830
    ctx->pc = 0x119E9Cu;
    SET_GPR_U32(ctx, 31, 0x119EA4u);
    ctx->pc = 0x119EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119E9Cu;
    // 0x119ea0: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D830u, 0x119E9Cu, 0x119EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119EA4u;
label_119ea4:
    // 0x119ea4: 0x8f8283ac  lw          $v0, -0x7C54($gp)
    ctx->pc = 0x119ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935468)));
    // 0x119ea8: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x119EA8u;
    {
        const bool branch_taken_0x119ea8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x119EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119EA8u;
        // 0x119eac: 0x21943  sra         $v1, $v0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119ea8) {
            ctx->pc = 0x119EB8u;
            return;
        }
    }
    ctx->pc = 0x119EB0u;
    // 0x119eb0: 0x2442001f  addiu       $v0, $v0, 0x1F
    ctx->pc = 0x119eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
    // 0x119eb4: 0x21943  sra         $v1, $v0, 5
    ctx->pc = 0x119eb4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 5));
    ctx->pc = 0x119eb8u;
}
