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

// Function: entry_001d8d98
// Address: 0x1d8d98 - 0x1d8e28
void entry_001d8d98_0x1d8d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d8d98_0x1d8d98");
#endif

    switch (ctx->pc) {
        case 0x1d8e20u: goto label_1d8e20;
        default: break;
    }

    ctx->pc = 0x1d8d98u;

    // 0x1d8d98: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d8d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d8d9c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1d8d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1d8da0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1d8da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1d8da4: 0x2453642c  addiu       $s3, $v0, 0x642C
    ctx->pc = 0x1d8da4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 25644));
    // 0x1d8da8: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1d8da8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x38642Cu));
    // 0x1d8dac: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1d8dacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1d8db0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1d8db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1d8db4: 0x24716440  addiu       $s1, $v1, 0x6440
    ctx->pc = 0x1d8db4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 25664));
    // 0x1d8db8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1d8db8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d8dbc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1d8dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1d8dc0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1d8dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d8dc4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1d8dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1d8dc8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d8dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d8dcc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1d8dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1d8dd0: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x1d8dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1d8dd4: 0x2225021  addu        $t2, $s1, $v0
    ctx->pc = 0x1d8dd4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d8dd8: 0x713021  addu        $a2, $v1, $s1
    ctx->pc = 0x1d8dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1d8ddc: 0x513821  addu        $a3, $v0, $s1
    ctx->pc = 0x1d8ddcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1d8de0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1d8de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1d8de4: 0x140402d  daddu       $t0, $t2, $zero
    ctx->pc = 0x1d8de4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8de8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1d8de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d8dec: 0x1445000e  bne         $v0, $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x1D8DECu;
    {
        const bool branch_taken_0x1d8dec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1D8DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8DECu;
        // 0x1d8df0: 0x100482d  daddu       $t1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8dec) {
            ctx->pc = 0x1D8E28u;
            return;
        }
    }
    ctx->pc = 0x1D8DF4u;
    // 0x1d8df4: 0x3c120038  lui         $s2, 0x38
    ctx->pc = 0x1d8df4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)56 << 16));
    // 0x1d8df8: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x1d8df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1d8dfc: 0x26436240  addiu       $v1, $s2, 0x6240
    ctx->pc = 0x1d8dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 25152));
    // 0x1d8e00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d8e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d8e04: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x1d8e04u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x1d8e08: 0xac620184  sw          $v0, 0x184($v1)
    ctx->pc = 0x1d8e08u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3863C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3863C4u, _value); } while (0);
    // 0x1d8e0c: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x1d8e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1d8e10: 0x8d050004  lw          $a1, 0x4($t0)
    ctx->pc = 0x1d8e10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1d8e14: 0x8d260008  lw          $a2, 0x8($t1)
    ctx->pc = 0x1d8e14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x1d8e18: 0xc0762f0  jal         func_1D8BC0
    ctx->pc = 0x1D8E18u;
    SET_GPR_U32(ctx, 31, 0x1D8E20u);
    ctx->pc = 0x1D8E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8E18u;
    // 0x1d8e1c: 0x8d47000c  lw          $a3, 0xC($t2) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8BC0u, 0x1D8E18u, 0x1D8E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8E20u;
label_1d8e20:
    // 0x1d8e20: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D8E20u;
    {
        const bool branch_taken_0x1d8e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8E20u;
        // 0x1d8e24: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8e20) {
            ctx->pc = 0x1D8E30u;
            return;
        }
    }
    ctx->pc = 0x1D8E28u;
}
