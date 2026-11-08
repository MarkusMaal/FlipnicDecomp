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

// Function: entry_001891fc
// Address: 0x1891fc - 0x1892d4
void entry_001891fc_0x1891fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001891fc_0x1891fc");
#endif

    switch (ctx->pc) {
        case 0x1892ccu: goto label_1892cc;
        default: break;
    }

    ctx->pc = 0x1891fcu;

    // 0x1891fc: 0x8e620050  lw          $v0, 0x50($s3)
    ctx->pc = 0x1891fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x189200: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x189200u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x189204: 0x346b0004  ori         $t3, $v1, 0x4
    ctx->pc = 0x189204u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x189208: 0x34038003  ori         $v1, $zero, 0x8003
    ctx->pc = 0x189208u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32771);
    // 0x18920c: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x18920cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x189210: 0x652825  or          $a1, $v1, $a1
    ctx->pc = 0x189210u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x189214: 0x24080047  addiu       $t0, $zero, 0x47
    ctx->pc = 0x189214u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x189218: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x189218u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x18921c: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x18921cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x189220: 0x346a0004  ori         $t2, $v1, 0x4
    ctx->pc = 0x189220u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x189224: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x189224u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x189228: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x189228u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
    // 0x18922c: 0xffa50060  sd          $a1, 0x60($sp)
    ctx->pc = 0x18922cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 5));
    // 0x189230: 0xffa40068  sd          $a0, 0x68($sp)
    ctx->pc = 0x189230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 4));
    // 0x189234: 0x34691001  ori         $t1, $v1, 0x1001
    ctx->pc = 0x189234u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4097);
    // 0x189238: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18923c: 0x24050044  addiu       $a1, $zero, 0x44
    ctx->pc = 0x18923cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x189240: 0x24040042  addiu       $a0, $zero, 0x42
    ctx->pc = 0x189240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x189244: 0xfc6b0000  sd          $t3, 0x0($v1)
    ctx->pc = 0x189244u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 11));
    // 0x189248: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18924c: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x18924cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x189250: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189254: 0xac6a000c  sw          $t2, 0xC($v1)
    ctx->pc = 0x189254u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 10));
    // 0x189258: 0x7baa0060  lq          $t2, 0x60($sp)
    ctx->pc = 0x189258u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18925c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18925cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189260: 0x7c6a0010  sq          $t2, 0x10($v1)
    ctx->pc = 0x189260u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 10));
    // 0x189264: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189268: 0xfc690020  sd          $t1, 0x20($v1)
    ctx->pc = 0x189268u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 32), GPR_U64(ctx, 9));
    // 0x18926c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18926cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189270: 0xfc680028  sd          $t0, 0x28($v1)
    ctx->pc = 0x189270u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 40), GPR_U64(ctx, 8));
    // 0x189274: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189278: 0xfc670030  sd          $a3, 0x30($v1)
    ctx->pc = 0x189278u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 48), GPR_U64(ctx, 7));
    // 0x18927c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18927cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189280: 0xfc660038  sd          $a2, 0x38($v1)
    ctx->pc = 0x189280u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 56), GPR_U64(ctx, 6));
    // 0x189284: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189288: 0xfc650040  sd          $a1, 0x40($v1)
    ctx->pc = 0x189288u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 64), GPR_U64(ctx, 5));
    // 0x18928c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18928cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189290: 0xfc640048  sd          $a0, 0x48($v1)
    ctx->pc = 0x189290u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 72), GPR_U64(ctx, 4));
    // 0x189294: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189298: 0x24630050  addiu       $v1, $v1, 0x50
    ctx->pc = 0x189298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x18929c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x18929cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1892a0: 0x8e660078  lw          $a2, 0x78($s3)
    ctx->pc = 0x1892a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x1892a4: 0x10c0000b  beqz        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x1892A4u;
    {
        const bool branch_taken_0x1892a4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1892a4) {
            ctx->pc = 0x1892D4u;
            return;
        }
    }
    ctx->pc = 0x1892ACu;
    // 0x1892ac: 0xc66c0070  lwc1        $f12, 0x70($s3)
    ctx->pc = 0x1892acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1892b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1892b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1892b4: 0xc6740010  lwc1        $f20, 0x10($s3)
    ctx->pc = 0x1892b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1892b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1892b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1892bc: 0xc6750014  lwc1        $f21, 0x14($s3)
    ctx->pc = 0x1892bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1892c0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1892c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1892c4: 0xc062240  jal         func_188900
    ctx->pc = 0x1892C4u;
    SET_GPR_U32(ctx, 31, 0x1892CCu);
    ctx->pc = 0x1892C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1892C4u;
    // 0x1892c8: 0x26700014  addiu       $s0, $s3, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188900u, 0x1892C4u, 0x1892CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1892CCu;
label_1892cc:
    // 0x1892cc: 0xe6740010  swc1        $f20, 0x10($s3)
    ctx->pc = 0x1892ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 16), bits); }
    // 0x1892d0: 0xe6150000  swc1        $f21, 0x0($s0)
    ctx->pc = 0x1892d0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    ctx->pc = 0x1892d4u;
}
