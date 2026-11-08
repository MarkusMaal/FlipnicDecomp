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

// Function: entry_001fe5cc
// Address: 0x1fe5cc - 0x1fe630
void entry_001fe5cc_0x1fe5cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fe5cc_0x1fe5cc");
#endif

    switch (ctx->pc) {
        case 0x1fe60cu: goto label_1fe60c;
        case 0x1fe620u: goto label_1fe620;
        default: break;
    }

    ctx->pc = 0x1fe5ccu;

    // 0x1fe5cc: 0x255102b  sltu        $v0, $s2, $s5
    ctx->pc = 0x1fe5ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x1fe5d0: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1fe5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1fe5d4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1fe5d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe5d8: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x1fe5d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1fe5dc: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x1fe5dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe5e0: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x1fe5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1fe5e4: 0x2a2280a  movz        $a1, $s5, $v0
    ctx->pc = 0x1fe5e4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 21));
    // 0x1fe5e8: 0x67182b  sltu        $v1, $v1, $a3
    ctx->pc = 0x1fe5e8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1fe5ec: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1FE5ECu;
    {
        const bool branch_taken_0x1fe5ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE5ECu;
        // 0x1fe5f0: 0x868021  addu        $s0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe5ec) {
            ctx->pc = 0x1FE630u;
            return;
        }
    }
    ctx->pc = 0x1FE5F4u;
    // 0x1fe5f4: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x1fe5f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1fe5f8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1FE5F8u;
    {
        const bool branch_taken_0x1fe5f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE5F8u;
        // 0x1fe5fc: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe5f8) {
            ctx->pc = 0x1FE630u;
            return;
        }
    }
    ctx->pc = 0x1FE600u;
    // 0x1fe600: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1fe600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe604: 0xc07fe2a  jal         func_1FF8A8
    ctx->pc = 0x1FE604u;
    SET_GPR_U32(ctx, 31, 0x1FE60Cu);
    ctx->pc = 0x1FE608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE604u;
    // 0x1fe608: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF8A8u, 0x1FE604u, 0x1FE60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE60Cu;
label_1fe60c:
    // 0x1fe60c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1fe60cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1fe610: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fe610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe614: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1fe614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1fe618: 0xc07f4fc  jal         func_1FD3F0
    ctx->pc = 0x1FE618u;
    SET_GPR_U32(ctx, 31, 0x1FE620u);
    ctx->pc = 0x1FE61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE618u;
    // 0x1fe61c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD3F0u, 0x1FE618u, 0x1FE620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE620u;
label_1fe620:
    // 0x1fe620: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1FE620u;
    {
        const bool branch_taken_0x1fe620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE620u;
        // 0x1fe624: 0x2b0a823  subu        $s5, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe620) {
            ctx->pc = 0x1FE6C4u;
            return;
        }
    }
    ctx->pc = 0x1FE628u;
    // 0x1fe628: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1FE628u;
    {
        const bool branch_taken_0x1fe628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe628) {
            ctx->pc = 0x1FE68Cu;
            return;
        }
    }
    ctx->pc = 0x1FE630u;
}
