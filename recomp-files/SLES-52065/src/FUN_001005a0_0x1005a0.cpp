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

// Function: FUN_001005a0
// Address: 0x1005a0 - 0x100624
void FUN_001005a0_0x1005a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001005a0_0x1005a0");
#endif

    switch (ctx->pc) {
        case 0x1005e4u: goto label_1005e4;
        case 0x1005f4u: goto label_1005f4;
        case 0x100608u: goto label_100608;
        default: break;
    }

    ctx->pc = 0x1005a0u;

    // 0x1005a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1005a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1005a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1005a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1005a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1005a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1005ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1005acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1005b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1005b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1005b4: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1005B4u;
    {
        const bool branch_taken_0x1005b4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1005b4) {
            ctx->pc = 0x1005C8u;
            goto label_1005c8;
        }
    }
    ctx->pc = 0x1005BCu;
    // 0x1005bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1005bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1005c0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1005C0u;
    {
        const bool branch_taken_0x1005c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1005c0) {
            ctx->pc = 0x10060Cu;
            goto label_10060c;
        }
    }
    ctx->pc = 0x1005C8u;
label_1005c8:
    // 0x1005c8: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1005C8u;
    {
        const bool branch_taken_0x1005c8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1005c8) {
            ctx->pc = 0x1005DCu;
            goto label_1005dc;
        }
    }
    ctx->pc = 0x1005D0u;
    // 0x1005d0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1005d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1005d4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1005D4u;
    {
        const bool branch_taken_0x1005d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1005d4) {
            ctx->pc = 0x100608u;
            goto label_100608;
        }
    }
    ctx->pc = 0x1005DCu;
label_1005dc:
    // 0x1005dc: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x1005DCu;
    SET_GPR_U32(ctx, 31, 0x1005E4u);
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x1005DCu, 0x1005E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1005E4u;
label_1005e4:
    // 0x1005e4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1005e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1005e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1005e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1005ec: 0xc07fb0e  jal         func_1FEC38
    ctx->pc = 0x1005ECu;
    SET_GPR_U32(ctx, 31, 0x1005F4u);
    ctx->pc = 0x1FEC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEC38u, 0x1005ECu, 0x1005F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1005F4u;
label_1005f4:
    // 0x1005f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1005f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1005f8: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1005F8u;
    {
        const bool branch_taken_0x1005f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1005f8) {
            ctx->pc = 0x100608u;
            goto label_100608;
        }
    }
    ctx->pc = 0x100600u;
    // 0x100600: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x100600u;
    SET_GPR_U32(ctx, 31, 0x100608u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x100600u, 0x100608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100608u;
label_100608:
    // 0x100608: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x100608u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10060c:
    // 0x10060c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10060cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x100610: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x100610u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x100614: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x100614u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100618: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x100618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x10061c: 0x3e00008  jr          $ra
    ctx->pc = 0x10061Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10061Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x100624u;
}
