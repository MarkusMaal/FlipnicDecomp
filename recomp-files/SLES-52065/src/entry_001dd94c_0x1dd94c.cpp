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

// Function: entry_001dd94c
// Address: 0x1dd94c - 0x1dd998
void entry_001dd94c_0x1dd94c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dd94c_0x1dd94c");
#endif

    switch (ctx->pc) {
        case 0x1dd954u: goto label_1dd954;
        case 0x1dd960u: goto label_1dd960;
        default: break;
    }

    ctx->pc = 0x1dd94cu;

    // 0x1dd94c: 0xc082520  jal         func_209480
    ctx->pc = 0x1DD94Cu;
    SET_GPR_U32(ctx, 31, 0x1DD954u);
    ctx->pc = 0x1DD950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD94Cu;
    // 0x1dd950: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209480u, 0x1DD94Cu, 0x1DD954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD954u;
label_1dd954:
    // 0x1dd954: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1dd954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd958: 0xc082178  jal         func_2085E0
    ctx->pc = 0x1DD958u;
    SET_GPR_U32(ctx, 31, 0x1DD960u);
    ctx->pc = 0x1DD95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD958u;
    // 0x1dd95c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E0u, 0x1DD958u, 0x1DD960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD960u;
label_1dd960:
    // 0x1dd960: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1DD960u;
    {
        const bool branch_taken_0x1dd960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD960u;
        // 0x1dd964: 0x2301023  subu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd960) {
            ctx->pc = 0x1DD9E0u;
            return;
        }
    }
    ctx->pc = 0x1DD968u;
    // 0x1dd968: 0x26437330  addiu       $v1, $s2, 0x7330
    ctx->pc = 0x1dd968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 29488));
    // 0x1dd96c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dd96cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dd970: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1dd970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1dd974: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1dd974u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1dd978: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dd978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dd97c: 0x8c420098  lw          $v0, 0x98($v0)
    ctx->pc = 0x1dd97cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x1dd980: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DD980u;
    {
        const bool branch_taken_0x1dd980 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1DD984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD980u;
        // 0x1dd984: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd980) {
            ctx->pc = 0x1DD998u;
            return;
        }
    }
    ctx->pc = 0x1DD988u;
    // 0x1dd988: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1dd988u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dd98c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1DD98Cu;
    {
        const bool branch_taken_0x1dd98c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD98Cu;
        // 0x1dd990: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd98c) {
            ctx->pc = 0x1DD9ACu;
            return;
        }
    }
    ctx->pc = 0x1DD994u;
    // 0x1dd994: 0x0  nop
    ctx->pc = 0x1dd994u;
    // NOP
    ctx->pc = 0x1dd998u;
}
