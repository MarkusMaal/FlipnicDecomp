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

// Function: entry_001989d4
// Address: 0x1989d4 - 0x198a1c
void entry_001989d4_0x1989d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001989d4_0x1989d4");
#endif

    switch (ctx->pc) {
        case 0x198a04u: goto label_198a04;
        default: break;
    }

    ctx->pc = 0x1989d4u;

label_1989d4:
    // 0x1989d4: 0x0  nop
    ctx->pc = 0x1989d4u;
    // NOP
label_1989d8:
    // 0x1989d8: 0x1260004f  beqz        $s3, . + 4 + (0x4F << 2)
label_1989dc:
    if (ctx->pc == 0x1989DCu) {
        ctx->pc = 0x1989E0u;
        goto label_1989e0;
    }
    ctx->pc = 0x1989D8u;
    {
        const bool branch_taken_0x1989d8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1989d8) {
            ctx->pc = 0x198B18u;
            return;
        }
    }
    ctx->pc = 0x1989E0u;
label_1989e0:
    // 0x1989e0: 0x8e230510  lw          $v1, 0x510($s1)
    ctx->pc = 0x1989e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1296)));
label_1989e4:
    // 0x1989e4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1989e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1989e8:
    // 0x1989e8: 0xae230510  sw          $v1, 0x510($s1)
    ctx->pc = 0x1989e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1296), GPR_U32(ctx, 3));
label_1989ec:
    // 0x1989ec: 0x8e230510  lw          $v1, 0x510($s1)
    ctx->pc = 0x1989ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1296)));
label_1989f0:
    // 0x1989f0: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_1989f4:
    if (ctx->pc == 0x1989F4u) {
        ctx->pc = 0x1989F8u;
        goto label_1989f8;
    }
    ctx->pc = 0x1989F0u;
    {
        const bool branch_taken_0x1989f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1989f0) {
            ctx->pc = 0x198A1Cu;
            return;
        }
    }
    ctx->pc = 0x1989F8u;
label_1989f8:
    // 0x1989f8: 0x26240490  addiu       $a0, $s1, 0x490
    ctx->pc = 0x1989f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1168));
label_1989fc:
    // 0x1989fc: 0xc04bf44  jal         func_12FD10
label_198a00:
    if (ctx->pc == 0x198A00u) {
        ctx->pc = 0x198A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1989FCu;
        // 0x198a00: 0xaec00000  sw          $zero, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198A04u;
        goto label_198a04;
    }
    ctx->pc = 0x1989FCu;
    SET_GPR_U32(ctx, 31, 0x198A04u);
    ctx->pc = 0x198A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1989FCu;
    // 0x198a00: 0xaec00000  sw          $zero, 0x0($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FD10u, 0x1989FCu, 0x198A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198A04u;
label_198a04:
    // 0x198a04: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x198a04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_198a08:
    // 0x198a08: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x198a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_198a0c:
    // 0x198a0c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x198a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_198a10:
    // 0x198a10: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x198a10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_198a14:
    // 0x198a14: 0x320f809  jalr        $t9
label_198a18:
    if (ctx->pc == 0x198A18u) {
        ctx->pc = 0x198A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198A14u;
        // 0x198a18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198A1Cu;
        goto label_fallthrough_0x198a14;
    }
    ctx->pc = 0x198A14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x198A1Cu);
        ctx->pc = 0x198A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198A14u;
        // 0x198a18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198A14u, 0x198A1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x198a14:
    ctx->pc = 0x198A1Cu;
}
