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

// Function: entry_001d48f8
// Address: 0x1d48f8 - 0x1d4948
void entry_001d48f8_0x1d48f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d48f8_0x1d48f8");
#endif

    switch (ctx->pc) {
        case 0x1d4900u: goto label_1d4900;
        default: break;
    }

    ctx->pc = 0x1d48f8u;

    // 0x1d48f8: 0xc0751b0  jal         func_1D46C0
    ctx->pc = 0x1D48F8u;
    SET_GPR_U32(ctx, 31, 0x1D4900u);
    ctx->pc = 0x1D48FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D48F8u;
    // 0x1d48fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D46C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D46C0u, 0x1D48F8u, 0x1D4900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4900u;
label_1d4900:
    // 0x1d4900: 0x8e230228  lw          $v1, 0x228($s1)
    ctx->pc = 0x1d4900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 552)));
    // 0x1d4904: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1d4904u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1d4908: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d4908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d490c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d490cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d4910: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1d4910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1d4914: 0xac4000a0  sw          $zero, 0xA0($v0)
    ctx->pc = 0x1d4914u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 160), GPR_U32(ctx, 0));
    // 0x1d4918: 0x8e230228  lw          $v1, 0x228($s1)
    ctx->pc = 0x1d4918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 552)));
    // 0x1d491c: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1d491cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d4920: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1d4920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1d4924: 0x28850000  slti        $a1, $a0, 0x0
    ctx->pc = 0x1d4924u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1d4928: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1d4928u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d492c: 0x65100b  movn        $v0, $v1, $a1
    ctx->pc = 0x1d492cu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x1d4930: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1d4930u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x1d4934: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1d4934u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1d4938: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x1d4938u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1d493c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1D493Cu;
    {
        const bool branch_taken_0x1d493c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D493Cu;
        // 0x1d4940: 0xae240228  sw          $a0, 0x228($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 552), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d493c) {
            ctx->pc = 0x1D4994u;
            return;
        }
    }
    ctx->pc = 0x1D4944u;
    // 0x1d4944: 0x0  nop
    ctx->pc = 0x1d4944u;
    // NOP
    ctx->pc = 0x1d4948u;
}
