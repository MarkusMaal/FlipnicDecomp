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

// Function: entry_001ad1f4
// Address: 0x1ad1f4 - 0x1ad270
void entry_001ad1f4_0x1ad1f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ad1f4_0x1ad1f4");
#endif

    switch (ctx->pc) {
        case 0x1ad218u: goto label_1ad218;
        case 0x1ad244u: goto label_1ad244;
        default: break;
    }

    ctx->pc = 0x1ad1f4u;

label_1ad1f4:
    // 0x1ad1f4: 0x8f828214  lw          $v0, -0x7DEC($gp)
    ctx->pc = 0x1ad1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
label_1ad1f8:
    // 0x1ad1f8: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x1ad1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_1ad1fc:
    // 0x1ad1fc: 0x8c420300  lw          $v0, 0x300($v0)
    ctx->pc = 0x1ad1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 768)));
label_1ad200:
    // 0x1ad200: 0xae2207f0  sw          $v0, 0x7F0($s1)
    ctx->pc = 0x1ad200u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2032), GPR_U32(ctx, 2));
label_1ad204:
    // 0x1ad204: 0x8e2407f0  lw          $a0, 0x7F0($s1)
    ctx->pc = 0x1ad204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2032)));
label_1ad208:
    // 0x1ad208: 0x8c990004  lw          $t9, 0x4($a0)
    ctx->pc = 0x1ad208u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1ad20c:
    // 0x1ad20c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1ad20cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1ad210:
    // 0x1ad210: 0x320f809  jalr        $t9
label_1ad214:
    if (ctx->pc == 0x1AD214u) {
        ctx->pc = 0x1AD218u;
        goto label_1ad218;
    }
    ctx->pc = 0x1AD210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AD218u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD210u, 0x1AD218u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AD218u;
label_1ad218:
    // 0x1ad218: 0x8e2207f0  lw          $v0, 0x7F0($s1)
    ctx->pc = 0x1ad218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2032)));
label_1ad21c:
    // 0x1ad21c: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x1ad21cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_1ad220:
    // 0x1ad220: 0x8f828214  lw          $v0, -0x7DEC($gp)
    ctx->pc = 0x1ad220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
label_1ad224:
    // 0x1ad224: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x1ad224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_1ad228:
    // 0x1ad228: 0x8c420304  lw          $v0, 0x304($v0)
    ctx->pc = 0x1ad228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 772)));
label_1ad22c:
    // 0x1ad22c: 0xae2207f4  sw          $v0, 0x7F4($s1)
    ctx->pc = 0x1ad22cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2036), GPR_U32(ctx, 2));
label_1ad230:
    // 0x1ad230: 0x8e2407f4  lw          $a0, 0x7F4($s1)
    ctx->pc = 0x1ad230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2036)));
label_1ad234:
    // 0x1ad234: 0x8c990004  lw          $t9, 0x4($a0)
    ctx->pc = 0x1ad234u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1ad238:
    // 0x1ad238: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1ad238u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1ad23c:
    // 0x1ad23c: 0x320f809  jalr        $t9
label_1ad240:
    if (ctx->pc == 0x1AD240u) {
        ctx->pc = 0x1AD244u;
        goto label_1ad244;
    }
    ctx->pc = 0x1AD23Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AD244u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD23Cu, 0x1AD244u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AD244u;
label_1ad244:
    // 0x1ad244: 0x8e2307f4  lw          $v1, 0x7F4($s1)
    ctx->pc = 0x1ad244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2036)));
label_1ad248:
    // 0x1ad248: 0xa940  sll         $s5, $zero, 5
    ctx->pc = 0x1ad248u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
label_1ad24c:
    // 0x1ad24c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ad24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ad250:
    // 0x1ad250: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1ad250u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ad254:
    // 0x1ad254: 0x2a0b02d  daddu       $s6, $s5, $zero
    ctx->pc = 0x1ad254u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1ad258:
    // 0x1ad258: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x1ad258u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_1ad25c:
    // 0x1ad25c: 0xa3828398  sb          $v0, -0x7C68($gp)
    ctx->pc = 0x1ad25cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935448), (uint8_t)GPR_U32(ctx, 2));
label_1ad260:
    // 0x1ad260: 0x8e220664  lw          $v0, 0x664($s1)
    ctx->pc = 0x1ad260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1636)));
label_1ad264:
    // 0x1ad264: 0x24520040  addiu       $s2, $v0, 0x40
    ctx->pc = 0x1ad264u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_1ad268:
    // 0x1ad268: 0x10000042  b           . + 4 + (0x42 << 2)
label_1ad26c:
    if (ctx->pc == 0x1AD26Cu) {
        ctx->pc = 0x1AD26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD268u;
        // 0x1ad26c: 0xae2006d0  sw          $zero, 0x6D0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1744), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD270u;
        goto label_fallthrough_0x1ad268;
    }
    ctx->pc = 0x1AD268u;
    {
        const bool branch_taken_0x1ad268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD268u;
        // 0x1ad26c: 0xae2006d0  sw          $zero, 0x6D0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1744), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad268) {
            ctx->pc = 0x1AD374u;
            return;
        }
    }
label_fallthrough_0x1ad268:
    ctx->pc = 0x1AD270u;
}
