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

// Function: entry_001a50cc
// Address: 0x1a50cc - 0x1a5148
void entry_001a50cc_0x1a50cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a50cc_0x1a50cc");
#endif

    switch (ctx->pc) {
        case 0x1a50ecu: goto label_1a50ec;
        case 0x1a50f4u: goto label_1a50f4;
        default: break;
    }

    ctx->pc = 0x1a50ccu;

    // 0x1a50cc: 0x0  nop
    ctx->pc = 0x1a50ccu;
    // NOP
    // 0x1a50d0: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x1a50d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1a50d4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a50d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a50d8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1a50d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1a50dc: 0x1062ffb0  beq         $v1, $v0, . + 4 + (-0x50 << 2)
    ctx->pc = 0x1A50DCu;
    {
        const bool branch_taken_0x1a50dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a50dc) {
            ctx->pc = 0x1A4FA0u;
            return;
        }
    }
    ctx->pc = 0x1A50E4u;
    // 0x1a50e4: 0xc063e14  jal         func_18F850
    ctx->pc = 0x1A50E4u;
    SET_GPR_U32(ctx, 31, 0x1A50ECu);
    ctx->pc = 0x1A50E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A50E4u;
    // 0x1a50e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1A50E4u, 0x1A50ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A50ECu;
label_1a50ec:
    // 0x1a50ec: 0xc058018  jal         func_160060
    ctx->pc = 0x1A50ECu;
    SET_GPR_U32(ctx, 31, 0x1A50F4u);
    ctx->pc = 0x1A50F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A50ECu;
    // 0x1a50f0: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160060u, 0x1A50ECu, 0x1A50F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A50F4u;
label_1a50f4:
    // 0x1a50f4: 0xae60073c  sw          $zero, 0x73C($s3)
    ctx->pc = 0x1a50f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1852), GPR_U32(ctx, 0));
    // 0x1a50f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a50f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a50fc: 0xa262075c  sb          $v0, 0x75C($s3)
    ctx->pc = 0x1a50fcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1884), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a5100: 0xae600760  sw          $zero, 0x760($s3)
    ctx->pc = 0x1a5100u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1888), GPR_U32(ctx, 0));
    // 0x1a5104: 0xae600764  sw          $zero, 0x764($s3)
    ctx->pc = 0x1a5104u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1892), GPR_U32(ctx, 0));
    // 0x1a5108: 0xae600768  sw          $zero, 0x768($s3)
    ctx->pc = 0x1a5108u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1896), GPR_U32(ctx, 0));
    // 0x1a510c: 0xae60076c  sw          $zero, 0x76C($s3)
    ctx->pc = 0x1a510cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1900), GPR_U32(ctx, 0));
    // 0x1a5110: 0xae600770  sw          $zero, 0x770($s3)
    ctx->pc = 0x1a5110u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1904), GPR_U32(ctx, 0));
    // 0x1a5114: 0xae600774  sw          $zero, 0x774($s3)
    ctx->pc = 0x1a5114u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1908), GPR_U32(ctx, 0));
    // 0x1a5118: 0xae600778  sw          $zero, 0x778($s3)
    ctx->pc = 0x1a5118u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1912), GPR_U32(ctx, 0));
    // 0x1a511c: 0xae60077c  sw          $zero, 0x77C($s3)
    ctx->pc = 0x1a511cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1916), GPR_U32(ctx, 0));
    // 0x1a5120: 0xae6007c4  sw          $zero, 0x7C4($s3)
    ctx->pc = 0x1a5120u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1988), GPR_U32(ctx, 0));
    // 0x1a5124: 0xae6007c8  sw          $zero, 0x7C8($s3)
    ctx->pc = 0x1a5124u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1992), GPR_U32(ctx, 0));
    // 0x1a5128: 0xae6007cc  sw          $zero, 0x7CC($s3)
    ctx->pc = 0x1a5128u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1996), GPR_U32(ctx, 0));
    // 0x1a512c: 0xae6007d0  sw          $zero, 0x7D0($s3)
    ctx->pc = 0x1a512cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2000), GPR_U32(ctx, 0));
    // 0x1a5130: 0xae6007d4  sw          $zero, 0x7D4($s3)
    ctx->pc = 0x1a5130u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2004), GPR_U32(ctx, 0));
    // 0x1a5134: 0xae6007d8  sw          $zero, 0x7D8($s3)
    ctx->pc = 0x1a5134u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2008), GPR_U32(ctx, 0));
    // 0x1a5138: 0xae6007dc  sw          $zero, 0x7DC($s3)
    ctx->pc = 0x1a5138u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2012), GPR_U32(ctx, 0));
    // 0x1a513c: 0xae6007e0  sw          $zero, 0x7E0($s3)
    ctx->pc = 0x1a513cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2016), GPR_U32(ctx, 0));
    // 0x1a5140: 0xae6007e4  sw          $zero, 0x7E4($s3)
    ctx->pc = 0x1a5140u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2020), GPR_U32(ctx, 0));
    // 0x1a5144: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a5144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a5148u;
}
