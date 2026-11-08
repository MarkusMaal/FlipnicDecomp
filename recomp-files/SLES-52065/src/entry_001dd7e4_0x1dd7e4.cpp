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

// Function: entry_001dd7e4
// Address: 0x1dd7e4 - 0x1dd830
void entry_001dd7e4_0x1dd7e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dd7e4_0x1dd7e4");
#endif

    switch (ctx->pc) {
        case 0x1dd7ecu: goto label_1dd7ec;
        case 0x1dd7f8u: goto label_1dd7f8;
        default: break;
    }

    ctx->pc = 0x1dd7e4u;

    // 0x1dd7e4: 0xc082520  jal         func_209480
    ctx->pc = 0x1DD7E4u;
    SET_GPR_U32(ctx, 31, 0x1DD7ECu);
    ctx->pc = 0x1DD7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD7E4u;
    // 0x1dd7e8: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209480u, 0x1DD7E4u, 0x1DD7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD7ECu;
label_1dd7ec:
    // 0x1dd7ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1dd7ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd7f0: 0xc082178  jal         func_2085E0
    ctx->pc = 0x1DD7F0u;
    SET_GPR_U32(ctx, 31, 0x1DD7F8u);
    ctx->pc = 0x1DD7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD7F0u;
    // 0x1dd7f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E0u, 0x1DD7F0u, 0x1DD7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD7F8u;
label_1dd7f8:
    // 0x1dd7f8: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1DD7F8u;
    {
        const bool branch_taken_0x1dd7f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD7F8u;
        // 0x1dd7fc: 0x2301023  subu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd7f8) {
            ctx->pc = 0x1DD878u;
            return;
        }
    }
    ctx->pc = 0x1DD800u;
    // 0x1dd800: 0x26437330  addiu       $v1, $s2, 0x7330
    ctx->pc = 0x1dd800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 29488));
    // 0x1dd804: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dd804u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dd808: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1dd808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1dd80c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1dd80cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1dd810: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dd810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dd814: 0x8c42009c  lw          $v0, 0x9C($v0)
    ctx->pc = 0x1dd814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
    // 0x1dd818: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DD818u;
    {
        const bool branch_taken_0x1dd818 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1DD81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD818u;
        // 0x1dd81c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd818) {
            ctx->pc = 0x1DD830u;
            return;
        }
    }
    ctx->pc = 0x1DD820u;
    // 0x1dd820: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1dd820u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dd824: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1DD824u;
    {
        const bool branch_taken_0x1dd824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD824u;
        // 0x1dd828: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd824) {
            ctx->pc = 0x1DD844u;
            return;
        }
    }
    ctx->pc = 0x1DD82Cu;
    // 0x1dd82c: 0x0  nop
    ctx->pc = 0x1dd82cu;
    // NOP
    ctx->pc = 0x1dd830u;
}
