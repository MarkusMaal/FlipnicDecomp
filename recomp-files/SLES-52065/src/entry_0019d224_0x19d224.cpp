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

// Function: entry_0019d224
// Address: 0x19d224 - 0x19d2c8
void entry_0019d224_0x19d224(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019d224_0x19d224");
#endif

    switch (ctx->pc) {
        case 0x19d238u: goto label_19d238;
        case 0x19d27cu: goto label_19d27c;
        default: break;
    }

    ctx->pc = 0x19d224u;

    // 0x19d224: 0x0  nop
    ctx->pc = 0x19d224u;
    // NOP
    // 0x19d228: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x19d228u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x19d22c: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x19d22cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x19d230: 0xc057040  jal         func_15C100
    ctx->pc = 0x19D230u;
    SET_GPR_U32(ctx, 31, 0x19D238u);
    ctx->pc = 0x19D234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D230u;
    // 0x19d234: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x19D230u, 0x19D238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D238u;
label_19d238:
    // 0x19d238: 0x8ea307f4  lw          $v1, 0x7F4($s5)
    ctx->pc = 0x19d238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 2036)));
    // 0x19d23c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19d23cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19d240: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x19d240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x19d244: 0xac620938  sw          $v0, 0x938($v1)
    ctx->pc = 0x19d244u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2360), GPR_U32(ctx, 2));
    // 0x19d248: 0x8ea207f4  lw          $v0, 0x7F4($s5)
    ctx->pc = 0x19d248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 2036)));
    // 0x19d24c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19d24cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19d250: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x19d250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x19d254: 0xac500978  sw          $s0, 0x978($v0)
    ctx->pc = 0x19d254u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2424), GPR_U32(ctx, 16));
    // 0x19d258: 0x8ea207f4  lw          $v0, 0x7F4($s5)
    ctx->pc = 0x19d258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 2036)));
    // 0x19d25c: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x19d25cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x19d260: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19d260u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19d264: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x19d264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x19d268: 0xac4008f8  sw          $zero, 0x8F8($v0)
    ctx->pc = 0x19d268u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2296), GPR_U32(ctx, 0));
    // 0x19d26c: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x19d26cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x19d270: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x19d270u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x19d274: 0xc057040  jal         func_15C100
    ctx->pc = 0x19D274u;
    SET_GPR_U32(ctx, 31, 0x19D27Cu);
    ctx->pc = 0x19D278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D274u;
    // 0x19d278: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x19D274u, 0x19D27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D27Cu;
label_19d27c:
    // 0x19d27c: 0x8ea307f4  lw          $v1, 0x7F4($s5)
    ctx->pc = 0x19d27cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 2036)));
    // 0x19d280: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19d280u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19d284: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x19d284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x19d288: 0xac6207f8  sw          $v0, 0x7F8($v1)
    ctx->pc = 0x19d288u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2040), GPR_U32(ctx, 2));
    // 0x19d28c: 0x8ea207f4  lw          $v0, 0x7F4($s5)
    ctx->pc = 0x19d28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 2036)));
    // 0x19d290: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19d290u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19d294: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x19d294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x19d298: 0xac400838  sw          $zero, 0x838($v0)
    ctx->pc = 0x19d298u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2104), GPR_U32(ctx, 0));
    // 0x19d29c: 0x8ea207f4  lw          $v0, 0x7F4($s5)
    ctx->pc = 0x19d29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 2036)));
    // 0x19d2a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19d2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19d2a4: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x19d2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x19d2a8: 0xac400878  sw          $zero, 0x878($v0)
    ctx->pc = 0x19d2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2168), GPR_U32(ctx, 0));
    // 0x19d2ac: 0x8ea207f4  lw          $v0, 0x7F4($s5)
    ctx->pc = 0x19d2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 2036)));
    // 0x19d2b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19d2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19d2b4: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x19d2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x19d2b8: 0xac5008b8  sw          $s0, 0x8B8($v0)
    ctx->pc = 0x19d2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2232), GPR_U32(ctx, 16));
    // 0x19d2bc: 0x8ea207f4  lw          $v0, 0x7F4($s5)
    ctx->pc = 0x19d2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 2036)));
    // 0x19d2c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19d2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19d2c4: 0xaea207f4  sw          $v0, 0x7F4($s5)
    ctx->pc = 0x19d2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 2036), GPR_U32(ctx, 2));
    ctx->pc = 0x19d2c8u;
}
