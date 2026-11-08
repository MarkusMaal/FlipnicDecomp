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

// Function: FUN_001d8c50
// Address: 0x1d8c50 - 0x1d8cfc
void FUN_001d8c50_0x1d8c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d8c50_0x1d8c50");
#endif

    switch (ctx->pc) {
        case 0x1d8cb0u: goto label_1d8cb0;
        case 0x1d8ce4u: goto label_1d8ce4;
        default: break;
    }

    ctx->pc = 0x1d8c50u;

    // 0x1d8c50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d8c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d8c54: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1d8c54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1d8c58: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d8c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d8c5c: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x1d8c5cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x1d8c60: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d8c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d8c64: 0x26106428  addiu       $s0, $s0, 0x6428
    ctx->pc = 0x1d8c64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25640));
    // 0x1d8c68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d8c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d8c6c: 0x24636440  addiu       $v1, $v1, 0x6440
    ctx->pc = 0x1d8c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25664));
    // 0x1d8c70: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x1d8c70u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d8c74: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x1d8c74u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x386428u));
    // 0x1d8c78: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1d8c78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1d8c7c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1d8c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1d8c80: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d8c80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d8c84: 0x626021  addu        $t4, $v1, $v0
    ctx->pc = 0x1d8c84u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d8c88: 0x434021  addu        $t0, $v0, $v1
    ctx->pc = 0x1d8c88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d8c8c: 0x180502d  daddu       $t2, $t4, $zero
    ctx->pc = 0x1d8c8cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8c90: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x1d8c90u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8c94: 0x140182d  daddu       $v1, $t2, $zero
    ctx->pc = 0x1d8c94u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8c98: 0xad0b0010  sw          $t3, 0x10($t0)
    ctx->pc = 0x1d8c98u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 11));
    // 0x1d8c9c: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x1d8c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x1d8ca0: 0xad450004  sw          $a1, 0x4($t2)
    ctx->pc = 0x1d8ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 5));
    // 0x1d8ca4: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x1d8ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
    // 0x1d8ca8: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x1D8CA8u;
    SET_GPR_U32(ctx, 31, 0x1D8CB0u);
    ctx->pc = 0x1D8CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8CA8u;
    // 0x1d8cac: 0xad87000c  sw          $a3, 0xC($t4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x1D8CA8u, 0x1D8CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8CB0u;
label_1d8cb0:
    // 0x1d8cb0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d8cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d8cb4: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x1d8cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1d8cb8: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1d8cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1d8cbc: 0x28a60000  slti        $a2, $a1, 0x0
    ctx->pc = 0x1d8cbcu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1d8cc0: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1d8cc0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8cc4: 0x86180b  movn        $v1, $a0, $a2
    ctx->pc = 0x1d8cc4u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x1d8cc8: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x1d8cc8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x1d8ccc: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1d8cccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1d8cd0: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x1d8cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1d8cd4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D8CD4u;
    {
        const bool branch_taken_0x1d8cd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8CD4u;
        // 0x1d8cd8: 0xae050000  sw          $a1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8cd4) {
            ctx->pc = 0x1D8CE4u;
            goto label_1d8ce4;
        }
    }
    ctx->pc = 0x1D8CDCu;
    // 0x1d8cdc: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x1D8CDCu;
    SET_GPR_U32(ctx, 31, 0x1D8CE4u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x1D8CDCu, 0x1D8CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8CE4u;
label_1d8ce4:
    // 0x1d8ce4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1d8ce4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8ce8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d8ce8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8cec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d8cecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d8cf0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d8cf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d8cf4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8CF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8CF4u;
        // 0x1d8cf8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8CF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8CFCu;
}
