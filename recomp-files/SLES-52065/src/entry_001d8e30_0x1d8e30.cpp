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

// Function: entry_001d8e30
// Address: 0x1d8e30 - 0x1d8ed0
void entry_001d8e30_0x1d8e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d8e30_0x1d8e30");
#endif

    switch (ctx->pc) {
        case 0x1d8e6cu: goto label_1d8e6c;
        default: break;
    }

    ctx->pc = 0x1d8e30u;

    // 0x1d8e30: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x1d8e30u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x1d8e34: 0x26104200  addiu       $s0, $s0, 0x4200
    ctx->pc = 0x1d8e34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16896));
    // 0x1d8e38: 0x26526240  addiu       $s2, $s2, 0x6240
    ctx->pc = 0x1d8e38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 25152));
    // 0x1d8e3c: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x1d8e3cu;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x384200u));
    // 0x1d8e40: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1d8e40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1d8e44: 0x3c070038  lui         $a3, 0x38
    ctx->pc = 0x1d8e44u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)56 << 16));
    // 0x1d8e48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d8e48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8e4c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d8e4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d8e50: 0x24846400  addiu       $a0, $a0, 0x6400
    ctx->pc = 0x1d8e50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25600));
    // 0x1d8e54: 0x240a01c0  addiu       $t2, $zero, 0x1C0
    ctx->pc = 0x1d8e54u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x1d8e58: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1d8e58u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8e5c: 0x24e74240  addiu       $a3, $a3, 0x4240
    ctx->pc = 0x1d8e5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16960));
    // 0x1d8e60: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x1d8e60u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8e64: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1D8E64u;
    SET_GPR_U32(ctx, 31, 0x1D8E6Cu);
    ctx->pc = 0x1D8E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8E64u;
    // 0x1d8e68: 0x84100  sll         $t0, $t0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1D8E64u, 0x1D8E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8E6Cu;
label_1d8e6c:
    // 0x1d8e6c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1d8e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1d8e70: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x1d8e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1d8e74: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1d8e74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1d8e78: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1d8e78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1d8e7c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1d8e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1d8e80: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d8e80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d8e84: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1d8e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1d8e88: 0x513021  addu        $a2, $v0, $s1
    ctx->pc = 0x1d8e88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1d8e8c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1d8e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1d8e90: 0x1464000f  bne         $v1, $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x1D8E90u;
    {
        const bool branch_taken_0x1d8e90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1D8E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8E90u;
        // 0x1d8e94: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8e90) {
            ctx->pc = 0x1D8ED0u;
            return;
        }
    }
    ctx->pc = 0x1D8E98u;
    // 0x1d8e98: 0x8e420184  lw          $v0, 0x184($s2)
    ctx->pc = 0x1d8e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 388)));
    // 0x1d8e9c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1D8E9Cu;
    {
        const bool branch_taken_0x1d8e9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D8EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8E9Cu;
        // 0x1d8ea0: 0xdfb10018  ld          $s1, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8e9c) {
            ctx->pc = 0x1D8ED4u;
            return;
        }
    }
    ctx->pc = 0x1D8EA4u;
    // 0x1d8ea4: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x1d8ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1d8ea8: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x1d8ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x1d8eac: 0x28640000  slti        $a0, $v1, 0x0
    ctx->pc = 0x1d8eacu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1d8eb0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1d8eb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8eb4: 0xa4100b  movn        $v0, $a1, $a0
    ctx->pc = 0x1d8eb4u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x1d8eb8: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x1d8eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x1d8ebc: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1d8ebcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x1d8ec0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1d8ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1d8ec4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1d8ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d8ec8: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1d8ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x1d8ecc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1d8eccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1d8ed0u;
}
