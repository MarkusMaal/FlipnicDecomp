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

// Function: entry_00197400
// Address: 0x197400 - 0x197480
void entry_00197400_0x197400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197400_0x197400");
#endif

    switch (ctx->pc) {
        case 0x197428u: goto label_197428;
        case 0x197438u: goto label_197438;
        case 0x197450u: goto label_197450;
        case 0x197464u: goto label_197464;
        case 0x197470u: goto label_197470;
        default: break;
    }

    ctx->pc = 0x197400u;

    // 0x197400: 0x28610005  slti        $at, $v1, 0x5
    ctx->pc = 0x197400u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x197404: 0x10200040  beqz        $at, . + 4 + (0x40 << 2)
    ctx->pc = 0x197404u;
    {
        const bool branch_taken_0x197404 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x197404) {
            ctx->pc = 0x197508u;
            return;
        }
    }
    ctx->pc = 0x19740Cu;
    // 0x19740c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x19740cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x197410: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x197410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x197414: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x197414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x197418: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x197418u;
    {
        const bool branch_taken_0x197418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x197418) {
            ctx->pc = 0x197508u;
            return;
        }
    }
    ctx->pc = 0x197420u;
    // 0x197420: 0xc057f74  jal         func_15FDD0
    ctx->pc = 0x197420u;
    SET_GPR_U32(ctx, 31, 0x197428u);
    ctx->pc = 0x197424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197420u;
    // 0x197424: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15FDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FDD0u, 0x197420u, 0x197428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197428u;
label_197428:
    // 0x197428: 0x4400015  bltz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x197428u;
    {
        const bool branch_taken_0x197428 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x197428) {
            ctx->pc = 0x197480u;
            return;
        }
    }
    ctx->pc = 0x197430u;
    // 0x197430: 0xc057f04  jal         func_15FC10
    ctx->pc = 0x197430u;
    SET_GPR_U32(ctx, 31, 0x197438u);
    ctx->pc = 0x197434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197430u;
    // 0x197434: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FC10u, 0x197430u, 0x197438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197438u;
label_197438:
    // 0x197438: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x197438u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19743c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x19743cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x197440: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x197440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x197444: 0x8c460024  lw          $a2, 0x24($v0)
    ctx->pc = 0x197444u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x197448: 0xc0422e0  jal         func_108B80
    ctx->pc = 0x197448u;
    SET_GPR_U32(ctx, 31, 0x197450u);
    ctx->pc = 0x19744Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197448u;
    // 0x19744c: 0x8e4506b0  lw          $a1, 0x6B0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1712)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108B80u, 0x197448u, 0x197450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197450u;
label_197450:
    // 0x197450: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x197450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x197454: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x197454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x197458: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x197458u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19745c: 0xc057ef0  jal         func_15FBC0
    ctx->pc = 0x19745Cu;
    SET_GPR_U32(ctx, 31, 0x197464u);
    ctx->pc = 0x197460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19745Cu;
    // 0x197460: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15FBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FBC0u, 0x19745Cu, 0x197464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197464u;
label_197464:
    // 0x197464: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x197464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197468: 0xc063e08  jal         func_18F820
    ctx->pc = 0x197468u;
    SET_GPR_U32(ctx, 31, 0x197470u);
    ctx->pc = 0x19746Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197468u;
    // 0x19746c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x197468u, 0x197470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197470u;
label_197470:
    // 0x197470: 0xaeb306ac  sw          $s3, 0x6AC($s5)
    ctx->pc = 0x197470u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1708), GPR_U32(ctx, 19));
    // 0x197474: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x197474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x197478: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x197478u;
    {
        const bool branch_taken_0x197478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19747Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197478u;
        // 0x19747c: 0xaea206a8  sw          $v0, 0x6A8($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 1704), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197478) {
            ctx->pc = 0x197508u;
            return;
        }
    }
    ctx->pc = 0x197480u;
}
