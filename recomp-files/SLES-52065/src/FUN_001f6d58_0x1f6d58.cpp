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

// Function: FUN_001f6d58
// Address: 0x1f6d58 - 0x1f6df8
void FUN_001f6d58_0x1f6d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f6d58_0x1f6d58");
#endif

    switch (ctx->pc) {
        case 0x1f6dacu: goto label_1f6dac;
        case 0x1f6dd4u: goto label_1f6dd4;
        default: break;
    }

    ctx->pc = 0x1f6d58u;

    // 0x1f6d58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f6d58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f6d5c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1f6d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1f6d60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f6d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f6d64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f6d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f6d68: 0x3c100022  lui         $s0, 0x22
    ctx->pc = 0x1f6d68u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)34 << 16));
    // 0x1f6d6c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1f6d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f6d70: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1f6d70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1f6d74: 0xae03bb64  sw          $v1, -0x449C($s0)
    ctx->pc = 0x1f6d74u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x21BB64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x21BB64u, _value); } while (0);
    // 0x1f6d78: 0x8e02bb64  lw          $v0, -0x449C($s0)
    ctx->pc = 0x1f6d78u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21BB64u));
    // 0x1f6d7c: 0xac82bb68  sw          $v0, -0x4498($a0)
    ctx->pc = 0x1f6d7cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x21BB68u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x21BB68u, _value); } while (0);
    // 0x1f6d80: 0x8e03bb64  lw          $v1, -0x449C($s0)
    ctx->pc = 0x1f6d80u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x21BB64u));
    // 0x1f6d84: 0x14650006  bne         $v1, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F6D84u;
    {
        const bool branch_taken_0x1f6d84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x1F6D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6D84u;
        // 0x1f6d88: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6d84) {
            ctx->pc = 0x1F6DA0u;
            goto label_1f6da0;
        }
    }
    ctx->pc = 0x1F6D8Cu;
    // 0x1f6d8c: 0xae00bb64  sw          $zero, -0x449C($s0)
    ctx->pc = 0x1f6d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294949732), GPR_U32(ctx, 0));
    // 0x1f6d90: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1f6d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1f6d94: 0xac40bb34  sw          $zero, -0x44CC($v0)
    ctx->pc = 0x1f6d94u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x21BB34u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x21BB34u, _value); } while (0);
    // 0x1f6d98: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1F6D98u;
    {
        const bool branch_taken_0x1f6d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6D98u;
        // 0x1f6d9c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6d98) {
            ctx->pc = 0x1F6DECu;
            goto label_1f6dec;
        }
    }
    ctx->pc = 0x1F6DA0u;
label_1f6da0:
    // 0x1f6da0: 0x8c44bb28  lw          $a0, -0x44D8($v0)
    ctx->pc = 0x1f6da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949672)));
    // 0x1f6da4: 0xc07ad94  jal         func_1EB650
    ctx->pc = 0x1F6DA4u;
    SET_GPR_U32(ctx, 31, 0x1F6DACu);
    ctx->pc = 0x1EB650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB650u, 0x1F6DA4u, 0x1F6DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6DACu;
label_1f6dac:
    // 0x1f6dac: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1f6dacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1f6db0: 0x8c62bb14  lw          $v0, -0x44EC($v1)
    ctx->pc = 0x1f6db0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21BB14u));
    // 0x1f6db4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F6DB4u;
    {
        const bool branch_taken_0x1f6db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6DB4u;
        // 0x1f6db8: 0x3c020039  lui         $v0, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6db4) {
            ctx->pc = 0x1F6DDCu;
            goto label_1f6ddc;
        }
    }
    ctx->pc = 0x1F6DBCu;
    // 0x1f6dbc: 0x8c431340  lw          $v1, 0x1340($v0)
    ctx->pc = 0x1f6dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4928)));
    // 0x1f6dc0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F6DC0u;
    {
        const bool branch_taken_0x1f6dc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6DC0u;
        // 0x1f6dc4: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6dc0) {
            ctx->pc = 0x1F6DDCu;
            goto label_1f6ddc;
        }
    }
    ctx->pc = 0x1F6DC8u;
    // 0x1f6dc8: 0x8c44bb20  lw          $a0, -0x44E0($v0)
    ctx->pc = 0x1f6dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949664)));
    // 0x1f6dcc: 0xc07ad94  jal         func_1EB650
    ctx->pc = 0x1F6DCCu;
    SET_GPR_U32(ctx, 31, 0x1F6DD4u);
    ctx->pc = 0x1EB650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB650u, 0x1F6DCCu, 0x1F6DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6DD4u;
label_1f6dd4:
    // 0x1f6dd4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F6DD4u;
    {
        const bool branch_taken_0x1f6dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6dd4) {
            ctx->pc = 0x1F6DE4u;
            goto label_1f6de4;
        }
    }
    ctx->pc = 0x1F6DDCu;
label_1f6ddc:
    // 0x1f6ddc: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1f6ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1f6de0: 0xac40bb34  sw          $zero, -0x44CC($v0)
    ctx->pc = 0x1f6de0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x21BB34u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x21BB34u, _value); } while (0);
label_1f6de4:
    // 0x1f6de4: 0xae00bb64  sw          $zero, -0x449C($s0)
    ctx->pc = 0x1f6de4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294949732), GPR_U32(ctx, 0));
    // 0x1f6de8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f6de8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1f6dec:
    // 0x1f6dec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f6decu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f6df0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F6DF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F6DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6DF0u;
        // 0x1f6df4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6DF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F6DF8u;
}
