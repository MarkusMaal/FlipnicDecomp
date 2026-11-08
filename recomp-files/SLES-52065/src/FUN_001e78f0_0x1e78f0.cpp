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

// Function: FUN_001e78f0
// Address: 0x1e78f0 - 0x1e7980
void FUN_001e78f0_0x1e78f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e78f0_0x1e78f0");
#endif

    switch (ctx->pc) {
        case 0x1e7920u: goto label_1e7920;
        default: break;
    }

    ctx->pc = 0x1e78f0u;

    // 0x1e78f0: 0x3c022aaa  lui         $v0, 0x2AAA
    ctx->pc = 0x1e78f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10922 << 16));
    // 0x1e78f4: 0xa42823  subu        $a1, $a1, $a0
    ctx->pc = 0x1e78f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1e78f8: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x1e78f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
    // 0x1e78fc: 0x51fc2  srl         $v1, $a1, 31
    ctx->pc = 0x1e78fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x1e7900: 0x450018  mult        $zero, $v0, $a1
    ctx->pc = 0x1e7900u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1e7904: 0x0  nop
    ctx->pc = 0x1e7904u;
    // NOP
    // 0x1e7908: 0x0  nop
    ctx->pc = 0x1e7908u;
    // NOP
    // 0x1e790c: 0x1010  mfhi        $v0
    ctx->pc = 0x1e790cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1e7910: 0x434021  addu        $t0, $v0, $v1
    ctx->pc = 0x1e7910u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e7914: 0x19000018  blez        $t0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1E7914u;
    {
        const bool branch_taken_0x1e7914 = (GPR_S32(ctx, 8) <= 0);
        if (branch_taken_0x1e7914) {
            ctx->pc = 0x1E7978u;
            goto label_1e7978;
        }
    }
    ctx->pc = 0x1E791Cu;
    // 0x1e791c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1e791cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e7920:
    // 0x1e7920: 0x5010003  bgez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E7920u;
    {
        const bool branch_taken_0x1e7920 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x1E7924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7920u;
        // 0x1e7924: 0x83843  sra         $a3, $t0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7920) {
            ctx->pc = 0x1E7930u;
            goto label_1e7930;
        }
    }
    ctx->pc = 0x1E7928u;
    // 0x1e7928: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x1e7928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1e792c: 0x23843  sra         $a3, $v0, 1
    ctx->pc = 0x1e792cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 1));
label_1e7930:
    // 0x1e7930: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x1e7930u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x1e7934: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x1e7934u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1e7938: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1e7938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1e793c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1e793cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1e7940: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1e7940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1e7944: 0x94a30002  lhu         $v1, 0x2($a1)
    ctx->pc = 0x1e7944u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1e7948: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1e7948u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1e794c: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E794Cu;
    {
        const bool branch_taken_0x1e794c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E794Cu;
        // 0x1e7950: 0x24e20001  addiu       $v0, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e794c) {
            ctx->pc = 0x1E7964u;
            goto label_1e7964;
        }
    }
    ctx->pc = 0x1E7954u;
    // 0x1e7954: 0x24a50006  addiu       $a1, $a1, 0x6
    ctx->pc = 0x1e7954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
    // 0x1e7958: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1e7958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e795c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E795Cu;
    {
        const bool branch_taken_0x1e795c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E795Cu;
        // 0x1e7960: 0x1024023  subu        $t0, $t0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e795c) {
            ctx->pc = 0x1E796Cu;
            goto label_1e796c;
        }
    }
    ctx->pc = 0x1E7964u;
label_1e7964:
    // 0x1e7964: 0x0  nop
    ctx->pc = 0x1e7964u;
    // NOP
    // 0x1e7968: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1e7968u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1e796c:
    // 0x1e796c: 0x0  nop
    ctx->pc = 0x1e796cu;
    // NOP
    // 0x1e7970: 0x1d00ffeb  bgtz        $t0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1E7970u;
    {
        const bool branch_taken_0x1e7970 = (GPR_S32(ctx, 8) > 0);
        ctx->pc = 0x1E7974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7970u;
        // 0x1e7974: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7970) {
            ctx->pc = 0x1E7920u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e7920;
        }
    }
    ctx->pc = 0x1E7978u;
label_1e7978:
    // 0x1e7978: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E797Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7978u;
        // 0x1e797c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7980u;
}
